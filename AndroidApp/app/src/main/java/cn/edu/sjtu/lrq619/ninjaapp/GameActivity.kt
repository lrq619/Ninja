package cn.edu.sjtu.lrq619.ninjaapp

import android.content.Context
import android.content.Intent
import android.os.Build
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.View
import androidx.annotation.RequiresApi
import androidx.core.content.ContextCompat.startActivity
import com.unity3d.player.UnityPlayer
import org.json.JSONObject
import kotlin.properties.Delegates

class GameActivity : AppCompatActivity() {

    companion object{
        lateinit var username:String
        var room_id : Int = -1

    }

    @RequiresApi(Build.VERSION_CODES.TIRAMISU)
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_game)

//        username = intent.extras?.get("username") as String

        username = intent.getStringExtra("username") as String
        room_id = intent.getIntExtra("room_id",-1)
        Log.e("GameActivity","username: "+ username + " room_id: "+ room_id)
        WebService.connectWebSocket()
        Log.e("GameActivity","New websocket connected!")
        WebService.startPlay(username, room_id)

        WebService.wsClient.addResponseHandler("GameStart",::onReceivedGameStart)
        WebService.wsClient.addResponseHandler("quit_room",::onReceivedQuitRoom)
        Log.e("Game activity on create","handlers: "+WebService.wsClient.printAllHanlders())
    }

    override fun onStop(){
        Log.e("GameActivityStop","Game Activity stopped!")
//        MainActivity.Data.roomID()
//            ?.let { WebService.quitRoom(User(MainActivity.Data.username()), it) }
//        MainActivity.Data.setRoomID(null)
        WebService.quitRoom(User(username), room_id)
        super.onStop()

    }

    override fun onDestroy() {
        Log.e("GameActivityDestory","Game Activity destoyed!")
        super.onDestroy()
    }
    fun onReceivedGameStart(source:String, responseArgs: JSONObject, code:Int):Unit{
        val username0 = responseArgs["username0"]
        val username1 = responseArgs["username1"]
        Log.e("Unity","Received GameStart, username0: "+username0+",username1: "+username1)
        val args = JSONObject()
        args.put("username0",username0)
        args.put("username1",username1)
        UnityPlayer.UnitySendMessage("GameController","GameStart", args.toString())
    }

    private fun onReceivedQuitRoom(source:String, responseArgs: JSONObject, code: Int){

        Log.e("Received Quit room","Another user quit room: "+room_id)
//        WebService.quitRoom(User(username), Companion.room_id)
        startActivity(Intent(applicationContext,MainActivity::class.java))

    }

    fun onClickBackButton(view: View) {
        startActivity(Intent(applicationContext, MainActivity::class.java))
    }
}