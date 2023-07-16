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

// TODO: Rename parameter arguments, choose names that match
// the fragment initialization parameters, e.g. ARG_ITEM_NUMBER
private const val ARG_PARAM1 = "param1"
private const val ARG_PARAM2 = "param2"

/**
 * A simple [Fragment] subclass.
 * Use the [LogSignInFragment.newInstance] factory method to
 * create an instance of this fragment.
 */
class LogSignInFragment : Fragment() {

    private lateinit var Data : DataStore

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        Data = MainActivity.Data
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        val view = inflater.inflate(R.layout.fragment_log_sign_in, container, false)
        val loginButton = view.findViewById<Button>(R.id.loginButton)
        loginButton.setOnClickListener {
            onClickLogin()
        }
        val signinButton = view.findViewById<Button>(R.id.signinButton)
        signinButton.setOnClickListener {
            onClickSignin()
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
            LogSignInFragment().apply {
                arguments = Bundle().apply {
                    putString(ARG_PARAM1, param1)
                    putString(ARG_PARAM2, param2)
                }
            }
    }

    private fun onClickLogin() {
        activity?.supportFragmentManager?.beginTransaction()
            ?.replace(R.id.MainFragments, LoginFragment(),null)?.commit()
    }

    private fun onClickSignin() {
        activity?.supportFragmentManager?.beginTransaction()
            ?.replace(R.id.MainFragments, SigninFragment(),null)?.commit()
    }
}