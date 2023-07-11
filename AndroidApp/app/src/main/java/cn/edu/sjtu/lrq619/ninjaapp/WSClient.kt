package cn.edu.sjtu.lrq619.ninjaapp

import android.util.Log
import org.java_websocket.client.WebSocketClient
import org.java_websocket.handshake.ServerHandshake
import java.net.URI

class WSClient(uri: URI) : WebSocketClient(uri) {

    override fun onOpen(handshakedata: ServerHandshake?) {
        Log.e("WS success","WS success!")
    }

    override fun onClose(code: Int, reason: String?, remote: Boolean) {
        println("Connection closed: $code $reason")
    }

    override fun onMessage(message: String?) {
        println("Received message: $message")
    }

    override fun onError(ex: Exception?) {
        Log.e("WS fail","Error occurred: ${ex?.message}")
    }
}