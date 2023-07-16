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
import android.provider.ContactsContract.Data
import android.text.TextUtils.replace
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
import androidx.fragment.app.FragmentContainer
import androidx.fragment.app.FragmentContainerView
import cn.edu.sjtu.lrq619.ninjaapp.WebService.createRoom
import cn.edu.sjtu.lrq619.ninjaapp.WebService.logoutUser
import cn.edu.sjtu.lrq619.ninjaapp.fragments.ui.CreateRoomFragment
import cn.edu.sjtu.lrq619.ninjaapp.fragments.ui.LogSignInFragment
import cn.edu.sjtu.lrq619.ninjaapp.fragments.ui.LoginFragment
import cn.edu.sjtu.lrq619.ninjaapp.fragments.ui.MainFragment
import cn.edu.sjtu.lrq619.ninjaapp.fragments.ui.SigninFragment
import com.unity3d.player.n
import org.json.JSONObject


class MainActivity : AppCompatActivity() {
    private lateinit var usernameText: TextView


    companion object{
        lateinit var Data : DataStore
    }

    @RequiresApi(Build.VERSION_CODES.Q)
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        Data = application as DataStore
        setContentView(R.layout.activity_main)
        get_permission()
//        Data = application as DataStore
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
            createRoom(user, ::onCreateRoom)
        }
        else {
            supportFragmentManager.beginTransaction()
                .replace(R.id.MainFragments, LogSignInFragment(), null).commit()
        }
    }

    private fun onCreateRoom(source:String, responseArgs:JSONObject, code: Int) {
//        toast("Room successfully created!")
        if(code == 0){
            Log.e("onCreateRoomInFragment", "Success in create room!")
            val room_id = responseArgs["room_id"]
            Data.setRoomID(room_id as Int?)
//            startActivity(Intent(this,CreateRoomActivity::class.java))
            supportFragmentManager.beginTransaction()
                .replace(R.id.MainFragments, CreateRoomFragment(), null).commit()
        }else{
            Log.e("onCreateRoom","Fail in create room!")
        }
    }

    fun onClickLogout(view: View?) {
        val user = User(username = Data.username())
        logoutUser(applicationContext, user, ::logoutSuccessful, ::logoutFailed)
    }

    private fun logoutSuccessful() {
        toast("Log out Successful!")
        Data.logOut()
        usernameText.text = getString(R.string.welcome_user_not_logged_in)
    }

    private fun logoutFailed(username: String?, code: Int) {
        toast("$username log out failed.")
        if (code == 400){
            Data.logOut()
            usernameText.text = "Please log in."
        }
    }
}