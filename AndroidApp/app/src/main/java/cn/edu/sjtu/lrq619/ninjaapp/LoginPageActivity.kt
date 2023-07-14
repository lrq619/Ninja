package cn.edu.sjtu.lrq619.ninjaapp

import android.content.Context
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.View
import android.widget.EditText

class LoginPageActivity : AppCompatActivity() {
    private lateinit var usernameInput: EditText
    lateinit var Data : DataStore

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_login_page)

        usernameInput = findViewById(R.id.LoginUsernameInput)
        Data = application as DataStore

    }

    fun onClickConfirmLogIn(view: View) {
        val user = User(username = usernameInput.text.toString())

        WebService.loginUser(
            context = applicationContext,
            user = user,
            Success = ::logInSuccessful,
            Failed = { logInFailed() })
    }

    fun onClickReturn(view: View) {
        startActivity(Intent(applicationContext,LoginActivity::class.java))
    }

    private fun logInSuccessful(username:String?) {
        toast("Log in Successful!")

        Data.logIn()
        Data.setUsername(username)
        Data.remainLogin()
        startActivity(Intent(this,MainActivity::class.java))
    }

    private fun logInFailed() {
        toast("Log in Failed.")

    }
}