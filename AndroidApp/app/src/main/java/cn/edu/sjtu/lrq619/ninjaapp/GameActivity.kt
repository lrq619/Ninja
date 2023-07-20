package cn.edu.sjtu.lrq619.ninjaapp

import android.Manifest
import android.content.Context
import android.content.Intent
import android.content.pm.PackageManager
import android.content.res.AssetManager
import android.os.Build
import android.os.Bundle
import android.os.Environment
import android.util.Log
import android.view.View
import androidx.annotation.RequiresApi
import androidx.appcompat.app.AppCompatActivity
import androidx.core.app.ActivityCompat
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


class GameActivity : AppCompatActivity(),RecognitionListener {
    private var speechService : SpeechService? = null
    private var voskModel : Model? = null
    private var lastRecognize : Instant? = null
    private val speechRecognizeInterval = 1000
    companion object{
        lateinit var username:String
        var room_id : Int = -1

    }

    private fun initModel() {
        StorageService.unpack(this, "model-en-us", "model",
            { model: Model ->
                voskModel = model
                toast("model init success!")
            }
        ) { exception: IOException ->
            Log.e("error in init",
                "Failed to unpack the model" + exception.message
            )
            exception.message?.let { toast(it) }
        }

    }



    @RequiresApi(Build.VERSION_CODES.O)
    override fun onPartialResult(hypothesis: String?) {
        val speech : String = JSONObject(hypothesis)["partial"] as String
//        Log.e("partial",speech)
//
        if(speech.length > 3){
            val curTime = Instant.now()
            var isRecognizeSuccess = false
            val dura : Long = Duration.between(lastRecognize,curTime).toMillis()

            if(dura >= speechRecognizeInterval){
//                Log.e("result",speech)
                val words = speech.split(" ").last()
                if(words.substring(0,1) == "r"){
                    Log.e("result","Release a skill!")
                    isRecognizeSuccess = true

                }else if(words.substring(0,1) == "c"){
                    Log.e("result","Cancel a skill!")
                    isRecognizeSuccess = true
                }

                if(isRecognizeSuccess){
//                    Log.e("partial","dura: "+dura)
                    lastRecognize = Instant.now()
                }
            }


        }

    }

    override fun onResult(hypothesis: String?) {
//        val speech = JSONObject(hypothesis)["text"]
//        if(speech == "release"){
//            Log.e("result","Release a skill!")
//
//        }else if(speech == "cancel"){
//            Log.e("result","Cancel a skill!")
//        }

    }

    override fun onFinalResult(hypothesis: String?) {

    }

    override fun onError(exception: Exception?) {
        Log.e("vosk","error: "+exception.toString())
    }

    override fun onTimeout() {

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
        if (ContextCompat.checkSelfPermission(this,
                Manifest.permission.RECORD_AUDIO
            ) != PackageManager.PERMISSION_GRANTED) {
            ActivityCompat.requestPermissions(this, arrayOf(Manifest.permission.RECORD_AUDIO), 1)
        }
        initModel()
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
        Thread.sleep(5000)
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

    @RequiresApi(Build.VERSION_CODES.O)
    fun onClickRecordButton(view: View){
        Log.e("record","going to init recognizer")
        val rec : Recognizer = Recognizer(voskModel, 16000.0f)
        Log.e("record","init recognizer")
        speechService = SpeechService(rec, 16000.0f)
        speechService!!.startListening(this)
        lastRecognize = Instant.now()
    }
}