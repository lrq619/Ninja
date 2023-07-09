package cn.edu.sjtu.lrq619.ninjaapp

import android.content.Intent
import android.content.SharedPreferences
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.provider.ContactsContract.Data
import android.util.Log
import android.view.View
import android.widget.EditText
import androidx.core.content.ContextCompat.startActivity

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

        GestureStore.loginUser(
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

        startActivity(Intent(this,MainActivity::class.java))
    }

    private fun logInFailed() {
        toast("Log in Failed.")

    }
}