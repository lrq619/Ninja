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
import cn.edu.sjtu.lrq619.ninjaapp.GameActivity
import cn.edu.sjtu.lrq619.ninjaapp.MainActivity
import cn.edu.sjtu.lrq619.ninjaapp.R
import cn.edu.sjtu.lrq619.ninjaapp.User
import cn.edu.sjtu.lrq619.ninjaapp.WebService
import cn.edu.sjtu.lrq619.ninjaapp.toast
import org.json.JSONObject

// TODO: Rename parameter arguments, choose names that match
// the fragment initialization parameters, e.g. ARG_ITEM_NUMBER
private const val ARG_PARAM1 = "param1"
private const val ARG_PARAM2 = "param2"

/**
 * A simple [Fragment] subclass.
 * Use the [MainFragment.newInstance] factory method to
 * create an instance of this fragment.
 */
class MainFragment : Fragment() {

    private lateinit var createRoomButton : Button
    private lateinit var joinRoomButton : Button

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

    }


    private fun isLoggedIn():Boolean {
        // check whether the user is already logged in
        return MainActivity.Data.isLoggedIn()
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        val view = inflater.inflate(R.layout.fragment_main, container, false)
        createRoomButton = view.findViewById(R.id.createRoomButton)
        joinRoomButton = view.findViewById(R.id.joinRoomButton)

        createRoomButton.setOnClickListener {
            onClickCreateRoom()
        }
        joinRoomButton.setOnClickListener {
            onClickJoinRoom()
        }

        return view
    }
    private fun onClickCreateRoom(){
        val user = User(username = MainActivity.Data.username())
        // jump to LoginActivity if not logged in; CreateRoomActivity otherwise

        if (isLoggedIn()){
            WebService.createNewWebSocket()
            WebService.createRoom(user, ::onCreateRoom)
        }
        else {
            activity?.supportFragmentManager?.beginTransaction()
                ?.replace(R.id.MainFragments, LogSignInFragment(), null)?.commit()
        }
    }

    private fun onClickJoinRoom() {
        val user = User(username = MainActivity.Data.username())
        // jump to LoginActivity if not logged in; CreateRoomActivity otherwise

        if (isLoggedIn()){
            WebService.createNewWebSocket()
            activity?.supportFragmentManager?.beginTransaction()
                ?.replace(R.id.MainFragments, JoinRoomFragment(), null)?.commit()
        }
        else {
            activity?.supportFragmentManager?.beginTransaction()
                ?.replace(R.id.MainFragments, LogSignInFragment(), null)?.commit()
        }
    }

    private fun onCreateRoom(source:String, responseArgs: JSONObject, code: Int) {
//        toast("Room successfully created!")
        if(code == 0){
            Log.e("onCreateRoomInFragment", "Success in create room!")
            val room_id = responseArgs["room_id"]
            MainActivity.Data.setRoomID(room_id as Int?)
            activity?.supportFragmentManager?.beginTransaction()
                ?.replace(R.id.MainFragments, CreateRoomFragment(), null)?.commit()
        }else{
            Log.e("onCreateRoom","Fail in create room!")
        }
    }

    private fun onCreateRoomSuccess(room_id:Int):Unit{
        MainActivity.Data.setRoomID(room_id as Int?)
        activity?.supportFragmentManager?.beginTransaction()
            ?.replace(R.id.MainFragments, CreateRoomFragment(), null)?.commit()
    }
    private fun onCreateRoomFail():Unit{
        activity?.toast("Create room failed")
    }

    companion object {
        /**
         * Use this factory method to create a new instance of
         * this fragment using the provided parameters.
         *
         * @param param1 Parameter 1.
         * @param param2 Parameter 2.
         * @return A new instance of fragment MainFragment.
         */
        // TODO: Rename and change types and number of parameters
        @JvmStatic
        fun newInstance(param1: String, param2: String) =
            MainFragment().apply {
                arguments = Bundle().apply {
                    putString(ARG_PARAM1, param1)
                    putString(ARG_PARAM2, param2)
                }
            }
    }
}