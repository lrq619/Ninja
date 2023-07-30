package cn.edu.sjtu.lrq619.ninjaapp

import android.content.Intent
import android.graphics.Camera
import android.os.Build
import android.os.Bundle
import android.util.Log
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.FrameLayout
import android.widget.ImageView
import android.widget.TextView
import androidx.annotation.RequiresApi
import androidx.core.content.ContentProviderCompat.requireContext
import androidx.core.content.ContextCompat.startActivity
import cn.edu.sjtu.lrq619.ninjaapp.WebService.wsClient
import com.unity3d.player.UnityPlayer
import org.json.JSONObject
import org.w3c.dom.Text

// TODO: Rename parameter arguments, choose names that match
// the fragment initialization parameters, e.g. ARG_ITEM_NUMBER
private const val ARG_PARAM1 = "param1"
private const val ARG_PARAM2 = "param2"

class UnityFragment : Fragment() {

    protected var mUnityPlayer: UnityPlayer? = null
    var frameLayoutForUnity: FrameLayout? = null
    val listener : SpeechRecogListener = SpeechRecogListener()
    lateinit var speechResultText : TextView
    lateinit var gestureImageView: ImageView


    fun UnityFragment() {}

    @RequiresApi(Build.VERSION_CODES.O)
    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        activity
        mUnityPlayer = UnityPlayer(activity)
        val view = inflater.inflate(R.layout.fragment_unity, container, false)
        frameLayoutForUnity =
            view.findViewById<View>(R.id.frameLayoutForUnity) as FrameLayout
        frameLayoutForUnity!!.addView(
            mUnityPlayer!!.view,
            FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT
        )
        mUnityPlayer!!.requestFocus()
        mUnityPlayer!!.windowFocusChanged(true)
        Log.e("Unity fragment","On Create view for Unity fragment")

        wsClient.addResponseHandler("AddGestureBuffer",::onReceivedAddGestureBuffer)
        wsClient.addResponseHandler("ChangeHP",::onReceivedChangeHP)
        wsClient.addResponseHandler("ReleaseSkill",::onReceivedReleaseSkill)
        wsClient.addResponseHandler("ClearGestureBuffer",::onReceivedClearBuffer)
        wsClient.addResponseHandler("GameStart",::onReceivedGameStart)
        wsClient.addResponseHandler("GameOver",::onReceivedGameOver)
        wsClient.addResponseHandler("InvokeMenu",::onReceivedInvokeMenu)

        speechResultText = activity?.findViewById<TextView>(R.id.speechResultText)!!
        gestureImageView = activity?.findViewById<ImageView>(R.id.gesture_image)!!

        listener.initModel(requireContext(), speechResultText)
        return view
    }




    fun onReceivedAddGestureBuffer(source:String, responseArgs: JSONObject, code:Int):Unit{
        val gesture_type = responseArgs["gesture_type"]
        Log.e("Unity","Received AddGestureBuffer: "+gesture_type)
//        UnityPlayer.UnitySendMessage("GameController","GestureFromAndroid", gesture_type as String?)
        val args = JSONObject()
        args.put("username",source)
        args.put("gesture",gesture_type)
        Log.e("ReceiveBuffer",args.toString())
        UnityPlayer.UnitySendMessage("GameController","AddGestureBuffer", args.toString())
    }

    fun onReceivedClearBuffer(source:String, responseArgs: JSONObject, code:Int):Unit{
        Log.e("Unity","Received ClearGestureBuffer from "+source)
        val args = JSONObject()
        args.put("username",source)
        UnityPlayer.UnitySendMessage("GameController","ClearGestureBuffer",args.toString())
        CameraFragment._lastGesture = null
    }

    fun onReceivedChangeHP(source:String, responseArgs: JSONObject, code:Int):Unit{
        val value = responseArgs["value"]
        Log.e("Unity","Received AddGestureBuffer: "+value)

        val args = JSONObject()
        args.put("value",value)
        args.put("username",source)
        UnityPlayer.UnitySendMessage("GameController","ChangeHP", args.toString())
    }

    fun onReceivedReleaseSkill(source:String, responseArgs: JSONObject, code:Int):Unit{
        val skill = responseArgs["skill"]
        Log.e("Unity","Player: "+source+" released skill "+skill)

        CameraFragment._lastGesture = null
        val args = JSONObject()
        args.put("username",source)
        args.put("skill",skill)
        Log.e("OnReceivedSKill",args.toString())
        UnityPlayer.UnitySendMessage("GameController","ReleaseSkill", args.toString())
    }



    override fun onStop() {
        mUnityPlayer!!.quit()

        super.onStop()
    }

    @RequiresApi(Build.VERSION_CODES.O)
    override fun onStart() {
        Log.e("Unity","Unity started")
        super.onStart()
        mUnityPlayer!!.resume()
        WebService.startPlay(GameActivity.username, GameActivity.room_id)

    }
    override fun onDestroy() {
        Log.e("Unity","Unity destoyed")
        mUnityPlayer!!.quit()
        super.onDestroy()
    }

    override fun onPause() {
        Log.e("Unity","Unity paused")
        super.onPause()

    }

    override fun onResume() {
        Log.e("Unity","Unity resumed")
        super.onResume()
//        mUnityPlayer!!.resume()
    }

    fun onReceivedGameStart(source:String, responseArgs: JSONObject, code:Int):Unit{
        val username0 = responseArgs["username0"]
        val username1 = responseArgs["username1"]
        Log.e("Unity","Received GameStart, username0: "+username0+",username1: "+username1)
        var identity = 0
        if(GameActivity.username == username0){
            identity = 0
        }else{
            identity = 1
        }
        val args = JSONObject()
        args.put("username0",username0)
        args.put("username1",username1)
        args.put("player_id",identity)
        args.put("room_id",GameActivity.room_id)
        UnityPlayer.UnitySendMessage("GameController","GameStart", args.toString())

    }

    fun onReceivedGameOver(source:String, responseArgs: JSONObject, code:Int):Unit{
        val winner = responseArgs["winner"]
        val loser = responseArgs["loser"]
        Log.e("Unity","Received GameOver, winner: "+winner+",loser: "+loser)

        val args = JSONObject()
        args.put("winner",winner)
        args.put("loser",loser)
        UnityPlayer.UnitySendMessage("GameController","GameOver", args.toString())

    }

    fun onReceivedInvokeMenu(source:String, responseArgs: JSONObject, code:Int):Unit{
        Log.e("Unity","Received invoke menu, player: "+source)

        val args = JSONObject()
        args.put("username",source)
        UnityPlayer.UnitySendMessage("GameController","InvokeMenu", args.toString())

    }
}