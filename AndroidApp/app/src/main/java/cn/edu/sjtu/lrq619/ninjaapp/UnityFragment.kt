package cn.edu.sjtu.lrq619.ninjaapp

import android.os.Bundle
import android.util.Log
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.FrameLayout
import com.unity3d.player.UnityPlayer

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
        return view
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
}