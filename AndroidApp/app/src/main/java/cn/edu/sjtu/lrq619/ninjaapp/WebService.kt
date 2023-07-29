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
    var wsClient = WSClient(URI(wsUrl))


    public fun initWebService(context: Context){
        if (!this::queue.isInitialized) {
            queue = newRequestQueue(context)
        }
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

    fun logoutUser(context: Context, user: User, Success:()->Unit, Failed:(String?,Int)->Unit) {
        TrustAllCertificates.apply()
        val jsonObj = mapOf(
            "username" to user.username
        )
        val postRequest = JsonObjectRequest(Request.Method.POST,
            httpUrl+"logoutUser/", JSONObject(jsonObj),
            { response ->
                Log.d("LogoutUser", "User logged out!")
                Success()
            },
            { error ->
                Log.e("LogoutUser", "Log out error, error code: "+error.networkResponse.statusCode)
                Failed(user.username,error.networkResponse.statusCode)
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

    fun createNewWebSocket(){
        Log.e("create","Create a new wsClient")
        wsClient = WSClient(URI(wsUrl))
    }



    fun createRoom(user: User, handler:(String, JSONObject,Int)->Unit) {
        TrustAllCertificates.apply()
        val wsRequest = JSONObject()
        wsRequest.put("username", user.username)
        wsRequest.put("action", "create_room")
        val message_args = JSONObject()
        wsRequest.put("args", message_args)

        connectWebSocket()
        wsClient.addResponseHandler("create_room",handler)
        wsClient.send(wsRequest.toString())
    }

    fun joinRoom(user: User, id: Int, join_handler:(String, JSONObject,Int)->Unit) {
//        TrustAllCertificates.apply()
        val wsRequest = JSONObject()
        wsRequest.put("username", user.username)
        wsRequest.put("action", "join_room")
        val message_args = JSONObject()
        message_args.put("room_id", id)
        wsRequest.put("args", message_args)

        connectWebSocket()
        wsClient.addResponseHandler("join_room",join_handler)
        wsClient.send(wsRequest.toString())
    }

    fun quitRoom(user: User, room_id: Int){
        val wsRequest = JSONObject()
        wsRequest.put("username",user.username)
        wsRequest.put("action","quit_room")
        val message_args = JSONObject()
        message_args.put("room_id",room_id)
        wsRequest.put("args",message_args)
        connectWebSocket()
        wsClient.send(wsRequest.toString())
    }

    fun startPlay(username:String, room_id: Int){
        val wsRequest = JSONObject()
        wsRequest.put("username",username)
        wsRequest.put("action","start_play")
        val message_args = JSONObject()
        message_args.put("room_id",room_id)
        wsRequest.put("args",message_args)
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

    fun releaseSkill(username:String){
        val wsRequest = JSONObject()
        wsRequest.put("username", username)
        wsRequest.put("action","post_speech")
        val message_args = JSONObject()
        message_args.put("speech_type","RELEASE")
        wsRequest.put("args",message_args)
        wsClient.send(wsRequest.toString())
    }

    fun cancelSkill(username:String){
        val wsRequest = JSONObject()
        wsRequest.put("username", username)
        wsRequest.put("action","post_speech")
        val message_args = JSONObject()
        message_args.put("speech_type","CANCEL")
        wsRequest.put("args",message_args)
        wsClient.send(wsRequest.toString())
    }

    fun invokeMenu(username: String){
        val wsRequest = JSONObject()
        wsRequest.put("username", username)
        wsRequest.put("action","post_speech")
        val message_args = JSONObject()
        message_args.put("speech_type","MENU")
        wsRequest.put("args",message_args)
        wsClient.send(wsRequest.toString())
    }
}