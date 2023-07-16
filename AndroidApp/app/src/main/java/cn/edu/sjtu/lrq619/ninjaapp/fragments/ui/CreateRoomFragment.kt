package cn.edu.sjtu.lrq619.ninjaapp.fragments.ui

import android.content.Intent
import android.os.Bundle
import android.util.Log
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Button
import android.widget.TextView
import cn.edu.sjtu.lrq619.ninjaapp.GameActivity
import cn.edu.sjtu.lrq619.ninjaapp.MainActivity
import cn.edu.sjtu.lrq619.ninjaapp.R
import cn.edu.sjtu.lrq619.ninjaapp.WebService
import org.json.JSONObject

// TODO: Rename parameter arguments, choose names that match
// the fragment initialization parameters, e.g. ARG_ITEM_NUMBER
private const val ARG_PARAM1 = "param1"
private const val ARG_PARAM2 = "param2"

/**
 * A simple [Fragment] subclass.
 * Use the [CreateRoomFragment.newInstance] factory method to
 * create an instance of this fragment.
 */
class CreateRoomFragment : Fragment() {
    // TODO: Rename and change types of parameters
    private var param1: String? = null
    private var param2: String? = null
    private lateinit var roomIDText : TextView
    private lateinit var returnButton : Button

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        arguments?.let {
            param1 = it.getString(ARG_PARAM1)
            param2 = it.getString(ARG_PARAM2)
        }

    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment

        val Data = MainActivity.Data
        val view = inflater.inflate(R.layout.fragment_create_room, container, false)
        roomIDText = view.findViewById<TextView>(R.id.roomIDText)
        roomIDText.text = getString(R.string.createRoom_roomID,Data.roomID())
        returnButton = view.findViewById(R.id.createRoomReturnButton)

        returnButton.setOnClickListener {
            onClickReturn()
        }
        WebService.wsClient.addResponseHandler("ready", ::onReady)
        return view
    }

    private fun onClickReturn() {
        activity?.supportFragmentManager?.beginTransaction()
            ?.replace(R.id.MainFragments, MainFragment(), null)?.commit()
    }

    private fun onReady(source:String, responseArgs: JSONObject, code: Int) {
        if(code == 0){
            val owner = responseArgs["owner"]
            val guest = responseArgs["guest"]
            Log.e("onReadyOwner","Owner received Guest ready! guest: "+guest)
            if(activity== null){
                Log.e("onReady","Activity is null")
            }else{
                Log.e("onReady","Activity is not null")
            }

            startActivity(Intent(activity?.applicationContext, GameActivity::class.java))


        }
    }

    companion object {
        /**
         * Use this factory method to create a new instance of
         * this fragment using the provided parameters.
         *
         * @param param1 Parameter 1.
         * @param param2 Parameter 2.
         * @return A new instance of fragment CreateRoomFragment.
         */
        // TODO: Rename and change types and number of parameters
        @JvmStatic
        fun newInstance(param1: String, param2: String) =
            CreateRoomFragment().apply {
                arguments = Bundle().apply {
                    putString(ARG_PARAM1, param1)
                    putString(ARG_PARAM2, param2)
                }
            }
    }
}