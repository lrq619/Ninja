package cn.edu.sjtu.lrq619.ninjaapp

import android.app.Application
import android.graphics.Typeface
import android.content.Context
import android.content.SharedPreferences
import android.preference.PreferenceManager
import android.util.Log
import androidx.lifecycle.ViewModelProvider.NewInstanceFactory.Companion.instance
import com.unity3d.player.n
//import kotlinx.coroutines.DefaultExecutor.shared
import kotlin.properties.Delegates

class DataStore : Application () {
    private var _isLoggedIn : Boolean = false
    private var _username :String? = null
    private var _roomID : Int? = null

//    private var sharedPreferences : SharedPreferences = getSharedPreferences("MyPreferences", Context.MODE_PRIVATE)

    override fun onCreate() {
        super.onCreate()
        instance = this

        sync()
    }

    companion object {
        private lateinit var instance: DataStore
    }

    private fun update() {
        val sharedPreferences = this.getSharedPreferences("MyPreferences", Context.MODE_PRIVATE)

        val editor = sharedPreferences.edit()
        editor.putString("username", _username)
        editor.putBoolean("isLoggedIn", _isLoggedIn)
        editor.apply()
    }

    private fun sync() {
        val sharedPreferences = this.getSharedPreferences("MyPreferences", Context.MODE_PRIVATE)
        _username = sharedPreferences.getString("username",null)
        _isLoggedIn = sharedPreferences.getBoolean("isLoggedIn", false)
    }

    fun isLoggedIn() : Boolean {
        return _isLoggedIn
    }

    fun logIn(username: String?) {
        _isLoggedIn = true
        _username = username
        update()
    }

    fun remainLogin(){
        if(!_isLoggedIn) return
        val sharedPreferences = this.getSharedPreferences("MyPreferences", Context.MODE_PRIVATE)
        val editor = sharedPreferences.edit()
        editor.putString("username", _username)

        editor.apply()
//        editor.commit()
    }

    fun logOut() {
        _isLoggedIn = false
        _username = null
        update()
    }

    fun username() : String? {
        return _username
    }

    fun setUsername(username : String?) {
        _username = username
        update()
    }

    fun roomID() : Int? {
        return _roomID
    }

    fun setRoomID(id : Int?) {
        _roomID = id
        update()
    }

}