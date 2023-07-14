package cn.edu.sjtu.lrq619.ninjaapp

import android.app.Activity
import android.app.Application.ActivityLifecycleCallbacks
import android.content.Context
import android.content.Intent
import android.content.SharedPreferences
import android.content.pm.PackageManager
import android.graphics.SurfaceTexture
import android.graphics.Typeface
import android.hardware.camera2.CameraCaptureSession
import android.hardware.camera2.CameraDevice
import android.hardware.camera2.CameraManager
import android.os.Build
import android.os.Bundle
import android.util.Log
import android.os.Handler
import android.os.HandlerThread
import android.util.TypedValue
import android.view.Surface
import android.view.TextureView
import android.view.View
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import androidx.core.content.res.ResourcesCompat
import androidx.annotation.RequiresApi
import androidx.appcompat.app.AppCompatActivity
import androidx.core.content.ContextCompat
import cn.edu.sjtu.lrq619.ninjaapp.WebService.createRoom
import org.json.JSONObject


class MainActivity : AppCompatActivity() {
    private lateinit var usernameText: TextView


    companion object{
        lateinit var Data : DataStore
    }

    @RequiresApi(Build.VERSION_CODES.Q)
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContentView(R.layout.activity_main)
        get_permission()
        Data = application as DataStore
        usernameText = findViewById(R.id.MainUsernameText)
    }
    fun get_permission(){
        if(ContextCompat.checkSelfPermission(this,android.Manifest.permission.CAMERA) != PackageManager.PERMISSION_GRANTED){
            requestPermissions(arrayOf(android.Manifest.permission.CAMERA), 101)
        }
    }

    override fun onStart() {
        super.onStart()
        val sharedPreferences = this.getSharedPreferences("MyPreferences", Context.MODE_PRIVATE)
        val username = sharedPreferences.getString("username", "")
        Log.e("saved username","saved username is "+username)
        if(username != ""){
            Data.logIn()
            Data.setUsername(username)
        }
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
            createRoom(user, ::onCreateRoom, ::onReady)
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
    private fun onLogoutSuccess(username:String?){
        Log.e("Logout Success",username+" log out success!")
//        super.onDestroy()
    }

    private fun onLogoutFail(username: String?){
        Log.e("Logout Fail", username+" log out failed!")
    }

    private fun onCreateRoom(source:String, responseArgs:JSONObject, code: Int) {
//        toast("Room successfully created!")
        if(code == 0){
            Log.e("onCreateRoom", "Success in create room!")
            val room_id = responseArgs["room_id"]
            Data.setRoomID(room_id as Int?)
            startActivity(Intent(this,CreateRoomActivity::class.java))
        }else{
            Log.e("onCreateRoom","Fail in create room!")
        }
    }

    private fun onReady(source:String, responseArgs:JSONObject, code: Int) {
        if(code == 0){
            val owner = responseArgs["owner"]
            val guest = responseArgs["guest"]
            Log.e("onReadyOwner","Owner received Guest ready! guest: "+guest)
            startActivity(Intent(this,GameActivity::class.java))
        }
    }

}