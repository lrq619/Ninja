using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        //StartCoroutine(debuger());
    }

    void GestureFromAndroid(string text)
    {
        EventBus.Publish(new StandardEvents.GestureFromAndroidEvent(text));
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator debuger()
    {
        yield return new WaitForSeconds(1f);
        for (int i = 0; i <= 5; i++)
        {
            EventBus.Publish(new StandardEvents.GestureFromAndroidEvent("Thumb_Up"));
            EventBus.Publish(new StandardEvents.HPFromAndroidEvent(i * 10, i * 10));
            yield return new WaitForSeconds(5f);
        }

    }
}
