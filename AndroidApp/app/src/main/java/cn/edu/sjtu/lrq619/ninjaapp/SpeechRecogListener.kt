package cn.edu.sjtu.lrq619.ninjaapp

import android.content.Context
import android.os.Build
import android.util.Log
import androidx.annotation.RequiresApi
import org.json.JSONObject
import org.vosk.Model
import org.vosk.Recognizer
import org.vosk.android.RecognitionListener
import org.vosk.android.SpeechService
import org.vosk.android.StorageService
import java.io.IOException
import java.lang.Exception
import java.time.Duration
import java.time.Instant

object SpeechRecogListener : RecognitionListener {

    private var voskModel : Model? = null
    private var lastRecognize : Instant? = null
    private val speechRecognizeInterval = 1000
    private val sampleRate = 16000.0f
    private var speechService : SpeechService? = null

    @RequiresApi(Build.VERSION_CODES.O)
    fun initModel(context : Context) {
        Log.e("init","Going to init model")
        StorageService.unpack(
            context, "model-en-us", "model",
            { model: Model ->
                voskModel = model
                context.toast("init model success")
                this.startListening()
            }
        ) { exception: IOException ->
            Log.e("error in init",
                "Failed to unpack the model" + exception.message
            )
            context.toast("init model failed!")
        }
    }



    @RequiresApi(Build.VERSION_CODES.O)
    fun startListening(){
        Log.e("init","going to init recognizer")
        val recognizer = Recognizer(voskModel, sampleRate)
        Log.e("init","going to init speechService")
        speechService = SpeechService(recognizer, sampleRate)
        lastRecognize = Instant.now()
        speechService?.startListening(this)
    }



    @RequiresApi(Build.VERSION_CODES.O)
    override fun onPartialResult(hypothesis: String?) {
        val speech: String = JSONObject(hypothesis)["partial"] as String
        if (speech.length > 3) {
            val curTime = Instant.now()
            var isRecognizeSuccess = false
            val dura: Long = Duration.between(lastRecognize, curTime).toMillis()

            if (dura >= speechRecognizeInterval) {
                val words = speech.split(" ").last()
                if (words.substring(0, 1) == "r") {
                    Log.e("result", "Release a skill!")
//                    WebService.releaseSkill(GameActivity.username)
                    isRecognizeSuccess = true

                } else if (words.substring(0, 1) == "c") {
                    Log.e("result", "Cancel a skill!")
//                    WebService.cancelSkill(GameActivity.username)
                    isRecognizeSuccess = true
                }

                if (isRecognizeSuccess) {
//                    Log.e("partial","dura: "+dura)
                    lastRecognize = Instant.now()
                }
            }
        }
    }

    override fun onResult(hypothesis: String?) {

    }

    override fun onFinalResult(hypothesis: String?) {

    }

    override fun onError(exception: Exception?) {

    }

    override fun onTimeout() {

    }
}