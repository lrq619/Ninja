package cn.edu.sjtu.lrq619.ninjaapp

import android.Manifest
import android.content.Context
import android.content.Intent
import android.media.MediaPlayer
import android.content.pm.PackageManager
import android.content.res.AssetManager
import android.os.Build
import android.os.Bundle
import android.os.Environment

import android.util.Log
import android.view.View
import android.widget.TextView
import androidx.annotation.RequiresApi
import androidx.appcompat.app.AppCompatActivity
import androidx.core.app.ActivityCompat
import androidx.core.content.ContentProviderCompat.requireContext
import androidx.core.content.ContextCompat
import androidx.core.content.ContextCompat.startActivity
import cn.edu.sjtu.lrq619.ninjaapp.GameActivity.Companion.room_id
import cn.edu.sjtu.lrq619.ninjaapp.GameActivity.Companion.username
import com.unity3d.player.UnityPlayer
import org.json.JSONObject
import org.vosk.Model
import org.vosk.Recognizer
import org.vosk.android.RecognitionListener
import org.vosk.android.SpeechService
import org.vosk.android.StorageService
import java.io.BufferedReader
import java.io.File
import java.io.FileInputStream
import java.io.FileNotFoundException
import java.io.FileOutputStream
import java.io.IOException
import java.io.InputStream
import java.io.InputStreamReader
import java.io.OutputStream
import java.time.Duration
import java.time.Instant


class GameActivity : AppCompatActivity(){
    lateinit var recordResultTextView : TextView
    private lateinit var mPlayer: MediaPlayer
    companion object{
        lateinit var username:String
        var room_id : Int = -1
        lateinit var mContext: Context
        @JvmStatic
        fun UnityrecvMessage(message:String){
            Log.e("Unity","received message from Unity: "+message)
            if(message == "quit_room"){
                startActivity(
                    mContext,Intent(mContext,MainActivity::class.java),null)
                Log.e("UnityrecvMessage", "received message: "+message)
            }

        }

    }




    @RequiresApi(Build.VERSION_CODES.TIRAMISU)
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_game)

        recordResultTextView = findViewById(R.id.RecordResult)
        username = intent.getStringExtra("username") as String
        room_id = intent.getIntExtra("room_id",-1)
        Log.e("GameActivity","username: "+ username + " room_id: "+ room_id)
        WebService.connectWebSocket()
        Log.e("GameActivity","New websocket connected!")

        WebService.wsClient.addResponseHandler("quit_room",::onReceivedQuitRoom)
        Log.e("Game activity on create","handlers: "+WebService.wsClient.printAllHanlders())

        mPlayer = MediaPlayer.create(this, R.raw.cyborg_ninja)
        mPlayer.isLooping = true
        mPlayer.start()
        mContext = this

    }



    override fun onStart() {
        super.onStart()
        if (!mPlayer.isPlaying){
            mPlayer.start()
        }
    }
    override fun onStop(){
        WebService.quitRoom(User(username), room_id)
        super.onStop()

        if (mPlayer.isPlaying) {
            mPlayer.stop()
        }
    }

    override fun onDestroy() {
        super.onDestroy()
        if (mPlayer.isPlaying) {
            mPlayer.stop()
        }
    }

    private fun onReceivedQuitRoom(source:String, responseArgs: JSONObject, code: Int){

        Log.e("Received Quit room","Another user quit room: "+room_id)
        startActivity(Intent(applicationContext,MainActivity::class.java))

    }

    fun onClickBackButton(view: View) {
        startActivity(Intent(applicationContext, MainActivity::class.java))
    }


}