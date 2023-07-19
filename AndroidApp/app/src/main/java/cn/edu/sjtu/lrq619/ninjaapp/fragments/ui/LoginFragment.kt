package cn.edu.sjtu.lrq619.ninjaapp.fragments.ui

import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Button
import android.widget.TextView
import cn.edu.sjtu.lrq619.ninjaapp.DataStore
import cn.edu.sjtu.lrq619.ninjaapp.MainActivity
import cn.edu.sjtu.lrq619.ninjaapp.R
import cn.edu.sjtu.lrq619.ninjaapp.User
import cn.edu.sjtu.lrq619.ninjaapp.WebService
import cn.edu.sjtu.lrq619.ninjaapp.toast

// TODO: Rename parameter arguments, choose names that match
// the fragment initialization parameters, e.g. ARG_ITEM_NUMBER
private const val ARG_PARAM1 = "param1"
private const val ARG_PARAM2 = "param2"

/**
 * A simple [Fragment] subclass.
 * Use the [LoginFragment.newInstance] factory method to
 * create an instance of this fragment.
 */
class LoginFragment : Fragment() {
    // TODO: Rename and change types of parameters
    private var param1: String? = null
    private var param2: String? = null
    private var Data : DataStore = MainActivity.Data
    private lateinit var usernameInput: TextView

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

        val view = inflater.inflate(R.layout.fragment_login, container, false)
        usernameInput = view.findViewById(R.id.loginUsernameInput)
        val loginButton = view.findViewById<Button>(R.id.confirmLogInButton)
        val returnButton = view.findViewById<Button>(R.id.LoginReturnButton)
        loginButton.setOnClickListener {
            onClickConfirmLogin()
        }
        returnButton.setOnClickListener {
            onClickLoginReturn()
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
         * @return A new instance of fragment LoginFragment.
         */
        // TODO: Rename and change types and number of parameters
        @JvmStatic
        fun newInstance(param1: String, param2: String) =
            LoginFragment().apply {
                arguments = Bundle().apply {
                    putString(ARG_PARAM1, param1)
                    putString(ARG_PARAM2, param2)
                }
            }
    }

    private fun onClickConfirmLogin() {
        val user = User(username = usernameInput.text.toString())

        activity?.applicationContext?.let {
            WebService.loginUser(
                context = it,
                user = user,
                Success = ::logInSuccessful,
                Failed = ::logInFailed)
        }
    }

    private fun onClickLoginReturn() {
        activity?.supportFragmentManager?.beginTransaction()
            ?.replace(R.id.MainFragments, MainFragment(),null)?.commit()
    }

    private fun logInSuccessful(username:String?) {
        activity?.toast("Log in Successful!")

        Data.logIn(username)

        activity?.findViewById<TextView>(R.id.MainUsernameText)?.text = getString(R.string.welcome_user_logged_in, username)

        activity?.supportFragmentManager?.beginTransaction()
            ?.replace(R.id.MainFragments, MainFragment(),null)?.commit()
    }

    private fun logInFailed() {
        activity?.toast("Log in Failed.")
    }
}