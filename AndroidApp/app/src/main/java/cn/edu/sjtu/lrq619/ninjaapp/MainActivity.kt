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
import android.view.Surface
import android.view.TextureView
import android.view.View
import android.widget.EditText
import android.widget.TextView
import cn.edu.sjtu.lrq619.ninjaapp.GestureStore.createRoom

class MainActivity : AppCompatActivity() {
    private lateinit var usernameText: TextView
    lateinit var Data : DataStore


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

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

    private fun createRoomSuccessful(id : Int?) {
        toast("Room successfully created!")
        Data.setRoomID(id)
        startActivity(Intent(this,CreateRoomActivity::class.java))
    }

    private fun createRoomFailed() {
        toast("Create room failed!")
    }

}