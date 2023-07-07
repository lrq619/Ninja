using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    public Text testText;
    // Start is called before the first frame update
    void Start()
    {
        EventBus.Subscribe<StandardEvents.GestureFromAndroidEvent>(ChangeTestText);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void ChangeTestText(StandardEvents.GestureFromAndroidEvent e)
    {
        testText.text = e.message;
    }
}
