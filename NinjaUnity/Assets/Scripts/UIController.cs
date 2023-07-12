using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    public Text testText;
    public Slider player_0_HpBar;
    public Text player_0_HpText;

    // Start is called before the first frame update
    void Start()
    {
        EventBus.Subscribe<StandardEvents.GestureFromAndroidEvent>(ChangeTestText);
        EventBus.Subscribe<StandardEvents.HPFromAndroidEvent>(ChangePlayerHP);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void ChangeTestText(StandardEvents.GestureFromAndroidEvent e)
    {
        testText.text = e.message;
    }

    void ChangePlayerHP(StandardEvents.HPFromAndroidEvent e)
    {
        player_0_HpBar.value = e.player_0_HP/100f;
        player_0_HpText.text = ((int)e.player_0_HP).ToString() + "%";
    }
}
