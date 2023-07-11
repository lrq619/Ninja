package cn.edu.sjtu.lrq619.ninjaapp

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.TextView

class CreateRoomActivity : AppCompatActivity() {

    private lateinit var Data : DataStore
    private lateinit var roomIDText : TextView

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_create_room)

        Data = application as DataStore
        roomIDText = findViewById(R.id.roomIDText)

        roomIDText.text = getString(R.string.createRoom_roomID,Data.roomID())
    }

    fun onClickReturn(view: View) {
        startActivity(Intent(applicationContext, MainActivity::class.java))
    }
}