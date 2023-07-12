package cn.edu.sjtu.lrq619.ninjaapp

import android.content.Intent
import android.content.pm.PackageManager
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.View
import android.widget.TextView
import androidx.core.content.ContextCompat
import cn.edu.sjtu.lrq619.ninjaapp.WebService.connectWebSocket
import cn.edu.sjtu.lrq619.ninjaapp.WebService.createRoom
import org.json.JSONObject
import java.net.URI

class MainActivity : AppCompatActivity() {
    private lateinit var usernameText: TextView
    lateinit var Data : DataStore

//    companion object{
//        private val wsUrl = "ws://47.98.59.37:8765"
//        val wsClient = WSClient(URI(wsUrl))
//    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        get_permission()
        Data = application as DataStore
        usernameText = findViewById(R.id.MainUsernameText)
    }

    override fun onStart() {
        super.onStart()

        if (Data.isLoggedIn()){
            usernameText.text = getString(R.string.welcome_user_logged_in,Data.username())
        }
        else {
            usernameText.text = getString(R.string.welcome_user_not_logged_in)
        }
    }

    fun get_permission(){
        if(ContextCompat.checkSelfPermission(this,android.Manifest.permission.CAMERA) != PackageManager.PERMISSION_GRANTED){
            requestPermissions(arrayOf(android.Manifest.permission.CAMERA), 101)
        }
    }

    override fun onRequestPermissionsResult(
        requestCode: Int,
        permissions: Array<out String>,
        grantResults: IntArray
    ) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults)
        if(grantResults[0] != PackageManager.PERMISSION_GRANTED){
            get_permission()
        }
    }

    private fun isLoggedIn():Boolean {
        // check whether the user is already logged in
        return Data.isLoggedIn()
    }
    fun onClickCreateRoom(view: View?){
        val user = User(username = Data.username())
        // jump to LoginActivity if not logged in; CreateRoomActivity otherwise

        if (isLoggedIn()){
            createRoom(user, ::onCreateRoom, ::onReady)
        }
        else {
            startActivity(Intent(this, LoginActivity::class.java))
        }
    }

    fun onClickJoinRoom(view: View?){
        val user = User()

        if (isLoggedIn()){
            startActivity(Intent(this, JoinRoomActivity::class.java))
        }
        else {
            startActivity(Intent(this, LoginActivity::class.java))
        }
    }

    private fun onCreateRoom(responseArgs:JSONObject, code: Int) {
//        toast("Room successfully created!")
        if(code == 0){
            Log.e("onCreateRoom", "Success in create room!")
            val room_id = responseArgs["room_id"]
            Data.setRoomID(room_id as Int?)
            startActivity(Intent(this,CreateRoomActivity::class.java))
        }else{
            Log.e("onCreateRoom","Fail in create room!")
        }
    }

    private fun onReady(responseArgs:JSONObject, code: Int) {
        if(code == 0){
            val owner = responseArgs["owner"]
            val guest = responseArgs["guest"]
            Log.e("onReadyOwner","Owner received Guest ready! guest: "+guest)
            startActivity(Intent(this,GameActivity::class.java))
        }
    }

}