package cn.edu.sjtu.lrq619.ninjaapp

import android.util.Log
import org.java_websocket.client.WebSocketClient
import org.java_websocket.handshake.ServerHandshake
import org.json.JSONObject
import java.net.URI
import kotlin.reflect.jvm.internal.impl.types.TypeCheckerState.SupertypesPolicy.None

class WSClient(uri: URI) : WebSocketClient(uri) {


    private fun onJoinRoom(responseArgs:JSONObject, code:Int){

    }
    private val respnseHandlerDict : MutableMap<String, (String, JSONObject, Int)->Unit> = mutableMapOf()

    fun addResponseHandler(action:String, handler:(String, JSONObject, Int)->Unit){
        respnseHandlerDict.put(action, handler)
    }
    override fun onOpen(handshakedata: ServerHandshake?) {
        Log.e("WS success","WS success!")
    }

    override fun onClose(code: Int, reason: String?, remote: Boolean) {
        println("Connection closed: $code $reason")
    }

    override fun onMessage(message: String?) {
        Log.e("Message Received","Received message: $message")
        if (message != null) {
            parseResponse(message)
        }
    }

    override fun onError(ex: Exception?) {
        Log.e("WS fail","Error occurred: ${ex?.message}")
    }

    private fun parseResponse(response: String){
        val json_obj = JSONObject(response)
        val source = json_obj["source"]
        val code = json_obj["code"]
        val action = json_obj["action"]
        val handler = respnseHandlerDict[action]
        val response_args : JSONObject = json_obj["args"] as JSONObject
        if (handler != null) {
            handler(source as String, response_args, code as Int)
        }else{
            Log.e("parseResponse","Don't have handler for action: "+action)
        }

    }
}