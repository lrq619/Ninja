package cn.edu.sjtu.lrq619.ninjaapp.fragments.ui

import android.content.Intent
import android.os.Bundle
import android.text.TextUtils.replace
import android.util.Log
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Button
import android.widget.EditText
import cn.edu.sjtu.lrq619.ninjaapp.GameActivity
import cn.edu.sjtu.lrq619.ninjaapp.MainActivity
import cn.edu.sjtu.lrq619.ninjaapp.R
import cn.edu.sjtu.lrq619.ninjaapp.User
import cn.edu.sjtu.lrq619.ninjaapp.WebService
import org.json.JSONObject

// TODO: Rename parameter arguments, choose names that match
// the fragment initialization parameters, e.g. ARG_ITEM_NUMBER
private const val ARG_PARAM1 = "param1"
private const val ARG_PARAM2 = "param2"

/**
 * A simple [Fragment] subclass.
 * Use the [JoinRoomFragment.newInstance] factory method to
 * create an instance of this fragment.
 */
class JoinRoomFragment : Fragment() {
    // TODO: Rename and change types of parameters
    private var param1: String? = null
    private var param2: String? = null
    private lateinit var roomIDInput : EditText
    private lateinit var joinButton: Button
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
        val view = inflater.inflate(R.layout.fragment_join_room, container, false)
        roomIDInput = view.findViewById(R.id.joinRoomIDInput)
        joinButton = view.findViewById(R.id.confirmJoinRoomButton)
        returnButton = view.findViewById(R.id.joinRoomReturnButton)

        joinButton.setOnClickListener {
            onClickConfirmJoinRoom()
        }
        returnButton.setOnClickListener {
            onClickReturn()
        }

        return view
    }

    companion object {
        /**
         * Use this factory method to create a new instance of
         * this fragment using the provided parameters.
         *
         * @param param1 Parameter 1.
         * @param param2 Parameter 2.
         * @return A new instance of fragment JoinRoomFragment.
         */
        // TODO: Rename and change types and number of parameters
        @JvmStatic
        fun newInstance(param1: String, param2: String) =
            JoinRoomFragment().apply {
                arguments = Bundle().apply {
                    putString(ARG_PARAM1, param1)
                    putString(ARG_PARAM2, param2)
                }
            }
    }

    private fun onClickConfirmJoinRoom() {
        val user = User(username = MainActivity.Data.username())
        val id = roomIDInput.text.toString().toInt()

        WebService.joinRoom(
            user = user,
            id = id,
            ready_handler = ::onReady,
            join_handler = ::onJoinRoom
        )
    }

    private fun onJoinRoom(source:String, responseArgs: JSONObject, code: Int){
        if(code == 0){
            Log.e("onJoinRoom", "Join room success!")
//            val room_id = responseArgs["room_id"]

        }else{
            Log.e("onJoinRoom","Join room failed!")
        }
    }

    private fun onReady(source:String, responseArgs: JSONObject, code: Int) {
        if(code == 0){
            Log.e("ready",responseArgs.toString())
            val owner = responseArgs["owner"]
            val guest = responseArgs["guest"]
            Log.e("onReadyOwner","Guest ready! owner: "+owner)
            startActivity(Intent(activity?.applicationContext, GameActivity::class.java))
        }
    }

    private fun onClickReturn() {
        activity?.supportFragmentManager?.beginTransaction()
            ?.replace(R.id.MainFragments,MainFragment(),null)?.commit()
    }

}