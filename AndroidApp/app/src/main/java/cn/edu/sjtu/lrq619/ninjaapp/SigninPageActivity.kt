package cn.edu.sjtu.lrq619.ninjaapp

import android.content.Intent
import android.content.SharedPreferences
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.View
import android.widget.EditText

class SigninPageActivity : AppCompatActivity() {
    private lateinit var usernameInput: EditText

    lateinit var Data : DataStore
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_signin_page)

        usernameInput = findViewById(R.id.SignInUsernameInput)
        Data = application as DataStore
    }

    fun onClickConfirmSignIn(view: View) {
        val user = User(username = usernameInput.text.toString())

        GestureStore.RegisterUser(
            context = applicationContext,
            user = user,
            Success = ::signInSuccessful,
            Failed = { signInFailed() })
    }

    fun onClickReturn(view: View) {
        startActivity(Intent(applicationContext,LoginActivity::class.java))
    }

    private fun signInSuccessful(username: String?) {
        toast("Sign in Successful!")

        Data.logIn()
        Data.setUsername(username)

        startActivity(Intent(this,MainActivity::class.java))
    }

    private fun signInFailed() {
        toast("Sign in Failed.")

    }
}