package cn.edu.sjtu.lrq619.ninjaapp

import android.annotation.SuppressLint
import android.app.Activity
import android.content.Context
import android.content.Intent
import android.content.SharedPreferences
import android.content.pm.PackageManager
import android.graphics.SurfaceTexture
import android.hardware.camera2.CameraCaptureSession
import android.hardware.camera2.CameraDevice
import android.hardware.camera2.CameraManager
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.Handler
import android.os.HandlerThread
import android.util.Log
import android.view.Surface
import android.view.TextureView
import android.view.View
import android.widget.EditText
import android.widget.TextView
import androidx.core.content.ContextCompat
import cn.edu.sjtu.lrq619.ninjaapp.GestureStore.createRoom
import cn.edu.sjtu.lrq619.ninjaapp.WSClient
import okhttp3.Response
import okhttp3.WebSocket
import okhttp3.WebSocketListener
import org.json.JSONObject
import java.net.URI

class MainActivity : AppCompatActivity() {
    private lateinit var usernameText: TextView
    lateinit var Data : DataStore
    private val wsUrl = "ws://47.98.59.37:8765"
    private val listener = object : WebSocketListener() {
        override fun onOpen(webSocket: WebSocket, response: Response) {
            // WebSocket connection is established
            println("WebSocket connection established")

            // Send a message to the server
//            webSocket.send("Hello, server!")
        }

        override fun onMessage(webSocket: WebSocket, text: String) {
            // Received a text message from the server
            println("Received message: $text")
        }

        override fun onClosing(webSocket: WebSocket, code: Int, reason: String) {
            // WebSocket connection is closing
            println("WebSocket connection closing: $code $reason")
        }

        override fun onFailure(webSocket: WebSocket, t: Throwable, response: Response?) {
            // WebSocket connection failed
            Log.e("FailWS","WebSocket connection failed: ${t.message}")
        }
    }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        get_permission()
        Data = application as DataStore
        usernameText = findViewById(R.id.MainUsernameText)
    }

    override fun onStart() {
        super.onStart()

        if (Data.isLoggedIn()){
            usernameText.text = getString(R.string.welcome_user_logged_in,Data.username())
        }
        else {
            usernameText.text = getString(R.string.welcome_user_not_logged_in)
        }
    }

    fun get_permission(){
        if(ContextCompat.checkSelfPermission(this,android.Manifest.permission.CAMERA) != PackageManager.PERMISSION_GRANTED){
            requestPermissions(arrayOf(android.Manifest.permission.CAMERA), 101)
        }
    }

    override fun onRequestPermissionsResult(
        requestCode: Int,
        permissions: Array<out String>,
        grantResults: IntArray
    ) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults)
        if(grantResults[0] != PackageManager.PERMISSION_GRANTED){
            get_permission()
        }
    }

    private fun isLoggedIn():Boolean {
        // check whether the user is already logged in
        return Data.isLoggedIn()
    }
    fun onClickCreateRoom(view: View?){
        val user = User(username = Data.username())
        // jump to LoginActivity if not logged in; CreateRoomActivity otherwise
        if (isLoggedIn()){
            createRoom(applicationContext, user, ::createRoomSuccessful, ::createRoomFailed)
        }
        else {
            startActivity(Intent(this, LoginActivity::class.java))
        }
    }

    fun onClickJoinRoom(view: View?){
        val user = User()

        if (isLoggedIn()){
            startActivity(Intent(this, JoinRoomActivity::class.java))
        }
        else {
            startActivity(Intent(this, LoginActivity::class.java))
        }
    }

    private fun createRoomSuccessful(id : Int?, port : Int?) {
        toast("Room successfully created!")
        Data.setRoomID(id)
        val uri = URI(wsUrl)
        val wsClient = WSClient(uri)
        wsClient.connect()
        while (!wsClient.isOpen) {
            Thread.sleep(100)
        }
        val username = Data.username()
        val wsRequest = JSONObject()
        wsRequest.put("username", username)
        wsRequest.put("action", "handshake")
        wsRequest.put("args", JSONObject())
        Log.e("WSsent","message sent: "+wsRequest.toString())
        wsClient.send(wsRequest.toString())

        startActivity(Intent(this,CreateRoomActivity::class.java))
    }

    private fun createRoomFailed() {
        toast("Create room failed!")
    }

}