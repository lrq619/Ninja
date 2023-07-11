package cn.edu.sjtu.lrq619.ninjaapp

import android.app.Application
import android.content.Context
import android.content.res.Resources
import android.provider.Settings.Global.getString
import android.util.Log
import com.android.volley.Request
import com.android.volley.RequestQueue
import com.android.volley.toolbox.JsonObjectRequest
import com.android.volley.toolbox.Volley.newRequestQueue
import org.json.JSONObject
import kotlin.reflect.full.declaredMemberProperties



object GestureStore {
    private val _gestures = arrayListOf<Gesture>()
    val gestures: List<Gesture> = _gestures
    private val nFields = Gesture::class.declaredMemberProperties.size

    private lateinit var queue: RequestQueue
    private val httpUrl = "https://47.98.59.37/"

    fun postGesture(context: Context, gesture: Gesture) {
        TrustAllCertificates.apply()
        Log.e("Trust","Trusted all certificates!")
        val jsonObj = mapOf(
            "gesturetype" to gesture.gesturetype,
            "username" to gesture.username
        )
        val postRequest = JsonObjectRequest(Request.Method.POST,
            httpUrl+"postgestures/", JSONObject(jsonObj),
            { Log.d("postgestures", "gesture posted!") },
            { error -> Log.e("postGesture", error.localizedMessage ?: "JsonObjectRequest error") }
        )

        if (!this::queue.isInitialized) {
            Log.e("init","queue get initialized!")
            queue = newRequestQueue(context)
        }
        queue.add(postRequest)

    }

    fun RegisterUser(context: Context, user: User, Success:(String?)->Unit, Failed:()->Unit){
        TrustAllCertificates.apply()

        val jsonObj = mapOf(
            "username" to user.username
        )
        val postRequest = JsonObjectRequest(Request.Method.POST,
            httpUrl+"postUser/", JSONObject(jsonObj),
             {response ->
                Log.e("listener","Sign in successful")
                Success(user.username)
            },
            {error ->
                val statusCode = error.networkResponse?.statusCode
                Log.e("err listener", "Status Code "+statusCode.toString())
                Failed()
            }
            )

        if (!this::queue.isInitialized) {
            queue = newRequestQueue(context)
        }
        queue.add(postRequest)
    }

    fun loginUser(context: Context, user: User, Success:(String?)->Unit, Failed:()->Unit) {
        TrustAllCertificates.apply()
        val jsonObj = mapOf(
            "username" to user.username
        )
        val postRequest = JsonObjectRequest(Request.Method.POST,
            httpUrl+"checkUserValid/", JSONObject(jsonObj),
            { response ->
                Log.d("LoginUser", "User logged in!")
                Success(user.username)
            },
            { error ->
                Log.e("LoginUser", "Log in error, error code: "+error.networkResponse.statusCode)
                Failed()
            }
        )

        if (!this::queue.isInitialized) {
            queue = newRequestQueue(context)
        }
        queue.add(postRequest)
    }

    fun createRoom(context: Context, user: User, Success:(Int?,Int?)->Unit, Failed:()->Unit) {
        TrustAllCertificates.apply()
        val jsonObj = mapOf(
            "username" to user.username
        )
        val postRequest = JsonObjectRequest(Request.Method.POST,
            httpUrl+"createRoom/", JSONObject(jsonObj),
            { response ->
                Log.d("create room", "Room Created!")
                Success(response.getInt("room_id"), response.getInt("port"))

            },
            { error ->
                Log.e("create room", "Create Room Failed!")
                Failed()
            }
        )
        if (!this::queue.isInitialized) {
            queue = newRequestQueue(context)
        }
        queue.add(postRequest)
    }

    fun joinRoom(context: Context, user: User, id: Int, Success:()->Unit, Failed:()->Unit) {
        TrustAllCertificates.apply()
        val jsonObj = mapOf(
            "username" to user.username,
            "room_id" to id
        )
        val postRequest = JsonObjectRequest(Request.Method.POST,
            httpUrl+"joinRoom/", JSONObject(jsonObj),
            { response ->
                Log.d("join room", "Room joined!")
                Success()
            },
            { error ->
                Log.e("join room", "Join Room Failed!")
                Failed()
            }
        )

        if (!this::queue.isInitialized) {
            queue = newRequestQueue(context)
        }
        queue.add(postRequest)
    }
}