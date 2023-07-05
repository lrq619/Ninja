package cn.edu.sjtu.lrq619.ninjaapp

import android.content.Context
import android.util.Log
import com.android.volley.Request
import com.android.volley.RequestQueue
import com.android.volley.toolbox.JsonObjectRequest
import com.android.volley.toolbox.Volley.newRequestQueue
import org.json.JSONArray
import org.json.JSONException
import org.json.JSONObject
import java.io.BufferedReader
import java.io.InputStream
import java.io.InputStreamReader
import java.net.URL
import java.security.cert.CertificateFactory
import javax.net.ssl.HttpsURLConnection
import kotlin.reflect.full.declaredMemberProperties


object GestureStore {
    private val _gestures = arrayListOf<Gesture>()
    val gestures: List<Gesture> = _gestures
    private val nFields = Gesture::class.declaredMemberProperties.size

    private lateinit var queue: RequestQueue
    private const val serverUrl = "https://47.98.59.37/"

    fun postGesture(context: Context, gesture: Gesture) {
        TrustAllCertificates.apply()
        Log.e("Trust","Trusted all certificates!")
        val jsonObj = mapOf(
            "gesturetype" to gesture.gesturetype,
            "username" to gesture.username
        )
        val postRequest = JsonObjectRequest(Request.Method.POST,
            serverUrl+"postgestures/", JSONObject(jsonObj),
            { Log.d("postgestures", "gesture posted!") },
            { error -> Log.e("postGesture", error.localizedMessage ?: "JsonObjectRequest error") }
        )

        if (!this::queue.isInitialized) {
            Log.e("init","queue get initialized!")
            queue = newRequestQueue(context)
        }
        queue.add(postRequest)
    }

    fun getGestures(context: Context) {
        val getRequest = JsonObjectRequest(serverUrl+"getchatts/",
            { response ->
                _gestures.clear()
                val chattsReceived = try { response.getJSONArray("gestures") } catch (e: JSONException) { JSONArray() }
                for (i in 0 until chattsReceived.length()) {
                    val chattEntry = chattsReceived[i] as JSONArray
                    if (chattEntry.length() == nFields) {
                        _gestures.add(Gesture(gesturetype = chattEntry[0].toString(),
                            username = chattEntry[1].toString(),
                            timestamp = chattEntry[2].toString())
                        )
                        Log.e("getGestures","Get gesture success! gesturetype: "+ chattEntry[0].toString())
                    } else {
                        Log.e("getGestures", "Received unexpected number of fields: " + chattEntry.length().toString() + " instead of " + nFields.toString())
                    }
                }

            }, {  }
        )

        if (!this::queue.isInitialized) {
            queue = newRequestQueue(context)
        }
        queue.add(getRequest)
    }

    fun postGesture_1(gesture: Gesture) {
//        val cf = CertificateFactory.getInstance("X.509")

//        val caInput: InputStream = getAssets().open("load_der.crt")

        Log.e("postGesture_1","Going to post")
        val url = URL(serverUrl+"postgestures/")
        val con : HttpsURLConnection = url.openConnection() as HttpsURLConnection

        Log.e("postGesture_1","Finish connection")
        con.requestMethod = "POST"
        con.setRequestProperty("Content-Type", "application/json")
        con.setRequestProperty("Accept", "application/json")
        con.setDoOutput(true)

        con.connect()

        val jsonObj = mapOf(
            "gesturetype" to gesture.gesturetype,
            "username" to gesture.username
        )
        val jsonInputString : String = jsonObj.toString()
        Log.e("postGesture_1","Going to enter outputstream")
        con.outputStream.use { os ->
            val input: ByteArray = jsonInputString.toByteArray(Charsets.UTF_8)
            Log.e("postGesture_1","Going to write to output buffer")
            os.write(input, 0, input.size)
        }
        Log.e("postGesture_1","Finish writing to output buffer")

        BufferedReader(
            InputStreamReader(con.inputStream, "utf-8")
        ).use { br ->
            val response = StringBuilder()
            var responseLine: String? = null
            while (br.readLine().also { responseLine = it } != null) {
                response.append(responseLine!!.trim { it <= ' ' })
            }
            println(response.toString())
        }
    }
}