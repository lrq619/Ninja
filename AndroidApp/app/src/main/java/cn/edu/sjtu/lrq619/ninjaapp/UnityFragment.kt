package cn.edu.sjtu.lrq619.ninjaapp

import android.os.Bundle
import android.util.Log
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.FrameLayout
import cn.edu.sjtu.lrq619.ninjaapp.WebService.wsClient
import com.unity3d.player.UnityPlayer
import org.json.JSONObject

// TODO: Rename parameter arguments, choose names that match
// the fragment initialization parameters, e.g. ARG_ITEM_NUMBER
private const val ARG_PARAM1 = "param1"
private const val ARG_PARAM2 = "param2"

class UnityFragment : Fragment() {
    protected var mUnityPlayer: UnityPlayer? = null
    var frameLayoutForUnity: FrameLayout? = null

    fun UnityFragment() {}

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
//        mUnityPlayer!!.resume()
        Log.e("Unity fragment","On Create view for Unity fragment")

        wsClient.addResponseHandler("AddGestureBuffer",::onReceivedAddGestureBuffer)
        wsClient.addResponseHandler("ChangeHP",::onReceivedChangeHP)
        wsClient.addResponseHandler("ReleaseSkill",::onReceivedReleaseSkill)
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
        if(skill == "LIGHT_ATTACK") {
            UnityPlayer.UnitySendMessage("GameController", "GestureFromAndroid", "ILoveYou")
        }

        val args = JSONObject()
        args.put("username",source)
        args.put("skill",skill)
        Log.e("OnReceivedSKill",args.toString())
        UnityPlayer.UnitySendMessage("GameController","ReleaseSkill", args.toString())
    }



    override fun onStop() {
        Log.e("Unity","Unity stopped")

        mUnityPlayer!!.quit()

        super.onStop()
    }

    override fun onStart() {
        Log.e("Unity","Unity started")
        super.onStart()
        mUnityPlayer!!.resume()
        WebService.startPlay(GameActivity.username, GameActivity.room_id)

        wsClient.addResponseHandler("GameStart",::onReceivedGameStart)
    }
    override fun onDestroy() {
        Log.e("Unity","Unity destoyed")
        mUnityPlayer!!.quit()
        super.onDestroy()
    }

    override fun onPause() {
        Log.e("Unity","Unity paused")
        super.onPause()
//        mUnityPlayer!!.pause()

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
        val args = JSONObject()
        args.put("username0",username0)
        args.put("username1",username1)
//        Thread.sleep(5000)
        UnityPlayer.UnitySendMessage("GameController","GameStart", args.toString())
    }
}