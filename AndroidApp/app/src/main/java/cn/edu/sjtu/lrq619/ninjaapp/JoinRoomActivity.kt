package cn.edu.sjtu.lrq619.ninjaapp

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.View
import android.widget.EditText
import cn.edu.sjtu.lrq619.ninjaapp.WebService.joinRoom
//import cn.edu.sjtu.lrq619.ninjaapp.MainActivity.Companion.wsClient
import cn.edu.sjtu.lrq619.ninjaapp.WebService.wsClient
import org.json.JSONObject

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
                user = user,
                id = usernameInput.text.toString().toInt(),
                join_handler = ::onJoinRoom,
                ready_handler = ::onReady
            )
        }
    }

    fun onClickReturn(view: View) {
        startActivity(Intent(applicationContext,MainActivity::class.java))
    }

    private fun onJoinRoom(source:String, responseArgs:JSONObject, code: Int){
        if(code == 0){
            Log.e("onJoinRoom", "Join room success!")
//            val room_id = responseArgs["room_id"]

        }else{
            Log.e("onJoinRoom","Join room failed!")
        }
    }

    private fun onReady(source:String, responseArgs:JSONObject, code: Int) {
        if(code == 0){
            val owner = responseArgs["owner"]
            val guest = responseArgs["guest"]
            Log.e("onReadyOwner","Guest ready! owner: "+owner)
            startActivity(Intent(this,GameActivity::class.java))
        }
    }


}