package cn.edu.sjtu.lrq619.ninjaapp

import android.Manifest
import android.content.Context
import android.content.Intent
import android.content.pm.PackageManager
import android.media.MediaPlayer
import android.os.Build
import android.os.Bundle
import android.util.Log
import android.view.View
import android.view.animation.AlphaAnimation
import android.view.animation.Animation
import android.view.animation.AnimationUtils
import android.widget.Button
import android.widget.ImageButton
import android.widget.ImageView
import android.widget.TextView
import androidx.annotation.RequiresApi
import androidx.appcompat.app.AppCompatActivity
import androidx.core.app.ActivityCompat
import androidx.core.content.ContextCompat
import androidx.core.content.ContextCompat.startActivity
import cn.edu.sjtu.lrq619.ninjaapp.WebService.logoutUser


class MainActivity : AppCompatActivity() {
    private lateinit var usernameText: TextView
    private lateinit var mPlayer:MediaPlayer
    private lateinit var volumeButton : ImageButton
    private lateinit var logoutImage : ImageButton

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
        WebService.initWebService(context = applicationContext)

        val logo : ImageView = findViewById(R.id.ninja_logo)
        val slideAnimation : Animation = AnimationUtils.loadAnimation(this, R.anim.slide_down_animation)
        val fadeAnimation : Animation = AlphaAnimation(0.0f,1.0f)
        fadeAnimation.duration = 2000
        logo.startAnimation(slideAnimation)
        //logo.startAnimation(fadeAnimation)
        mPlayer = MediaPlayer.create(this, R.raw.lines_of_code)
        mPlayer.isLooping = true
        mPlayer.start()

        volumeButton = findViewById(R.id.volumeButton)
        logoutImage = findViewById(R.id.logoutImageButton)

        volumeButton.setOnClickListener {
            if(mPlayer.isPlaying) {
                mPlayer.pause()
                volumeButton.setImageResource(R.drawable.volumn_off)
            }
            else {
                mPlayer.start()
                volumeButton.setImageResource(R.drawable.volumn_on)
            }
        }
        logoutImage.setOnClickListener {
            onClickLogout(logoutImage)
        }
    }
    fun get_permission(){
        if(ContextCompat.checkSelfPermission(this,android.Manifest.permission.CAMERA) != PackageManager.PERMISSION_GRANTED
            || ContextCompat.checkSelfPermission(this, android.Manifest.permission.RECORD_AUDIO) != PackageManager.PERMISSION_GRANTED){
            requestPermissions(arrayOf(android.Manifest.permission.CAMERA,android.Manifest.permission.RECORD_AUDIO), 101)
        }

    }

    fun get_micro_permission(){
        if (ContextCompat.checkSelfPermission(this,
                Manifest.permission.RECORD_AUDIO
            ) != PackageManager.PERMISSION_GRANTED) {
            requestPermissions(arrayOf(Manifest.permission.RECORD_AUDIO), 101)
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
        if (!mPlayer.isPlaying){
            mPlayer.start()
        }
    }

    override fun onStop() {
        super.onStop()
        mPlayer.stop()
    }

    override fun onDestroy() {
        super.onDestroy()
        mPlayer.stop()
        mPlayer.release()
    }

    private fun isLoggedIn():Boolean {
        // check whether the user is already logged in
        return Data.isLoggedIn()
    }

    fun onClickLogout(view: View?) {
        val user = User(username = Data.username())
        logoutUser(applicationContext, user, ::logoutSuccessful, ::logoutFailed)
    }

    fun onClickGame(view: View?){
        val intent = Intent(applicationContext, GameActivity::class.java)
        intent.putExtra("username",MainActivity.Data.username())
        intent.putExtra("room_id",MainActivity.Data.roomID())
        startActivity(intent)
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