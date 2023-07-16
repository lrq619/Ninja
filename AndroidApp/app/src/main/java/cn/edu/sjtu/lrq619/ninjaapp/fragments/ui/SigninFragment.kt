package cn.edu.sjtu.lrq619.ninjaapp.fragments.ui

import android.content.Intent
import android.os.Bundle
import android.provider.ContactsContract.Data
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
import cn.edu.sjtu.lrq619.ninjaapp.WebService.RegisterUser
import cn.edu.sjtu.lrq619.ninjaapp.toast
import cn.edu.sjtu.lrq619.ninjaapp.fragments.ui.MainFragment

// TODO: Rename parameter arguments, choose names that match
// the fragment initialization parameters, e.g. ARG_ITEM_NUMBER
private const val ARG_PARAM1 = "param1"
private const val ARG_PARAM2 = "param2"

/**
 * A simple [Fragment] subclass.
 * Use the [SigninFragment.newInstance] factory method to
 * create an instance of this fragment.
 */
class SigninFragment : Fragment() {

    private var Data : DataStore = MainActivity.Data
    private lateinit var usernameInput: TextView


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
//        Data = MainActivity.Data
        val view = inflater.inflate(R.layout.fragment_signin, container, false)
        usernameInput = view.findViewById(R.id.SignInUsernameInput)

        val signinButton = view.findViewById<Button>(R.id.confirmSignInButton)
        val returnButton = view.findViewById<Button>(R.id.signinReturnButton)
        signinButton.setOnClickListener {
            onClickConfirmSignin()
        }
        returnButton.setOnClickListener {
            onClickSigninReturn()
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
         * @return A new instance of fragment SigninFragment.
         */
        // TODO: Rename and change types and number of parameters
        @JvmStatic
        fun newInstance(param1: String, param2: String) =
            SigninFragment().apply {
                arguments = Bundle().apply {
                    putString(ARG_PARAM1, param1)
                    putString(ARG_PARAM2, param2)
                }
            }
    }

    private fun onClickConfirmSignin() {
        val user = User(username = usernameInput.text.toString())

        activity?.applicationContext?.let {
            WebService.RegisterUser(
                context = it,
                user = user,
                Success = ::signInSuccessful,
                Failed = ::signInFailed)
        }

    }

    private fun onClickSigninReturn() {
        activity?.supportFragmentManager?.beginTransaction()
            ?.replace(R.id.MainFragments, MainFragment(),null)?.commit()
    }

    private fun signInSuccessful(username: String?) {
        activity?.toast("Sign in Successful!")

        Data.logIn(username)

        activity?.findViewById<TextView>(R.id.MainUsernameText)?.text = getString(R.string.welcome_user_logged_in, username)

        activity?.supportFragmentManager?.beginTransaction()
            ?.replace(R.id.MainFragments, MainFragment(),null)?.commit()
    }

    private fun signInFailed() {
        activity?.toast("Sign in Failed.")
    }


}