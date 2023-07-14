package cn.edu.sjtu.lrq619.ninjaapp

import android.content.Context
import android.util.Log
import com.android.volley.Request
import com.android.volley.RequestQueue
import com.android.volley.toolbox.JsonObjectRequest
import com.android.volley.toolbox.Volley.newRequestQueue
import org.json.JSONObject
import java.net.URI
import kotlin.reflect.full.declaredMemberProperties


object WebService {
    private val _gestures = arrayListOf<Gesture>()
    val gestures: List<Gesture> = _gestures
    private val nFields = Gesture::class.declaredMemberProperties.size

    private lateinit var queue: RequestQueue
    private val httpUrl = "https://47.98.59.37/"
    private val wsUrl = "ws://47.98.59.37:8765"
    val wsClient = WSClient(URI(wsUrl))



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
            httpUrl+"loginUser/", JSONObject(jsonObj),
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

    fun logoutUser(context: Context, user: User, Success:(String?)->Unit, Failed:(String?)->Unit) {
        TrustAllCertificates.apply()
        val jsonObj = mapOf(
            "username" to user.username
        )
        val postRequest = JsonObjectRequest(Request.Method.POST,
            httpUrl+"logoutUser/", JSONObject(jsonObj),
            { response ->
                Log.d("LogoutUser", "User logged out!")
                Success(user.username)
            },
            { error ->
                Log.e("LogoutUser", "Log out error, error code: "+error.networkResponse.statusCode)
                Failed(user.username)
            }
        )

        if (!this::queue.isInitialized) {
            queue = newRequestQueue(context)
        }
        queue.add(postRequest)
    }

    fun connectWebSocket(){
        if(wsClient.isOpen) return
        wsClient.connect()
        while (!wsClient.isOpen) {
            Thread.sleep(100)
        }
    }



    fun createRoom(user: User, create_handler:(String, JSONObject,Int)->Unit, ready_handler:(String, JSONObject,Int)->Unit) {
        TrustAllCertificates.apply()


        val wsRequest = JSONObject()
        wsRequest.put("username", user.username)
        wsRequest.put("action", "create_room")
        wsRequest.put("args", JSONObject())

        connectWebSocket()
        wsClient.addResponseHandler("create_room",create_handler)
        wsClient.addResponseHandler("ready", ready_handler)
        wsClient.send(wsRequest.toString())
    }

    fun joinRoom(user: User, id: Int, join_handler:(String, JSONObject,Int)->Unit, ready_handler:(String,JSONObject,Int)->Unit) {
        TrustAllCertificates.apply()
        val wsRequest = JSONObject()
        wsRequest.put("username", user.username)
        wsRequest.put("action", "join_room")
        val message_args = JSONObject()
        message_args.put("room_id", id)
        wsRequest.put("args", message_args)

        connectWebSocket()
        wsClient.addResponseHandler("join_room",join_handler)
        wsClient.addResponseHandler("ready",ready_handler)
        wsClient.send(wsRequest.toString())
    }

    fun postGesture(gesture: Gesture, handler:(String, JSONObject,Int)->Unit) {
        TrustAllCertificates.apply()
        val wsRequest = JSONObject()
        wsRequest.put("username",gesture.username)
        wsRequest.put("action","post_gesture")
        val message_args = JSONObject()
        message_args.put("gesture_type", gesture.gesturetype)
        wsRequest.put("args",message_args)
        connectWebSocket()
//        wsClient.addResponseHandler("post_gesture",handler)
        wsClient.send(wsRequest.toString())

    }
}