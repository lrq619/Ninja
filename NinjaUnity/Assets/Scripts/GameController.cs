using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    void GestureFromAndroid(string text)
    {
        EventBus.Publish(new StandardEvents.GestureFromAndroidEvent(text));
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
