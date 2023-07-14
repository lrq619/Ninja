package cn.edu.sjtu.lrq619.ninjaapp

import android.app.Application
import android.graphics.Typeface
import androidx.lifecycle.ViewModelProvider.NewInstanceFactory.Companion.instance
import kotlin.properties.Delegates

class DataStore : Application () {

    private var _isLoggedIn : Boolean = false
    private var _username :String? = null
    private var _roomID : Int? = null

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

}