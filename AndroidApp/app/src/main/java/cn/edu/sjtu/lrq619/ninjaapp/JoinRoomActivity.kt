package cn.edu.sjtu.lrq619.ninjaapp

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.EditText
import android.widget.TextView
import org.w3c.dom.Text
import cn.edu.sjtu.lrq619.ninjaapp.GestureStore.joinRoom

class JoinRoomActivity : AppCompatActivity() {
    private lateinit var usernameInput: EditText
    lateinit var Data : DataStore

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_join_room)

        Data = application as DataStore

        usernameInput = findViewById(R.id.JoinRoomUsernameInput)
    }

    fun onClickJoinRoom(view: View) {
        val user: User = User(username = Data.username())
        if (usernameInput.text.isBlank()){
            toast("Please enter your room id.")
        }
        else {
            joinRoom(
                context = applicationContext,
                user = user,
                id = usernameInput.text.toString().toInt(),
                Success = ::joinRoomSuccessful,
                Failed = ::joinRoomFailed
            )
        }
    }

    fun onClickReturn(view: View) {
        startActivity(Intent(applicationContext,MainActivity::class.java))
    }

    private fun joinRoomSuccessful() {
        toast("Room joined successful!")
        startActivity(Intent(applicationContext,GameActivity::class.java))
    }

    private fun joinRoomFailed() {
        toast("Join room failed!")
    }

}