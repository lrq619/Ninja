package cn.edu.sjtu.lrq619.ninjaapp

import android.app.Application
import android.content.Context
import androidx.lifecycle.ViewModelProvider.NewInstanceFactory.Companion.instance
import kotlin.properties.Delegates

class DataStore : Application () {

    private var _isLoggedIn : Boolean = false
    private var _username :String? = null
    private var _roomID : Int? = null
    private var _numActivity : Int = 0
    init {

    }

    override fun onCreate() {
        super.onCreate()
        instance = this
    }

    companion object {
        private lateinit var instance: DataStore

    }

    fun isLoggedIn() : Boolean {
        return _isLoggedIn
    }

    fun logIn() {
        _isLoggedIn = true
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
    }

    fun username() : String? {
        return _username
    }

    fun setUsername(username : String?) {
        _username = username
    }

    fun roomID() : Int? {
        return _roomID
    }

    fun setRoomID(id : Int?) {
        _roomID = id
    }

    fun setNumActivity(num:Int){
        _numActivity = num
    }

    fun getNumActivity(): Int {
        return _numActivity
    }


}