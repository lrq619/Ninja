package cn.edu.sjtu.lrq619.ninjaapp

import android.content.Intent
import android.content.SharedPreferences
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View


class LoginActivity : AppCompatActivity() {
    private lateinit var sharedPreferences: SharedPreferences

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_login)

        sharedPreferences = getSharedPreferences("MyPrefs", MODE_PRIVATE)
    }

    fun onClickSignIn(view: View) {
        startActivity(Intent(applicationContext,SigninPageActivity::class.java))
    }

    fun onClickLogIn(view: View) {
        startActivity(Intent(applicationContext,LoginPageActivity::class.java))
    }
}