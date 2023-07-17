using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    public Text testText;
    public Slider player_0_HpBar;
    public Text player_0_HpText;
    public Text player_0_Name;
    public Slider player_1_HpBar;
    public Text player_1_HpText;
    public Text player_1_Name;

    public int player_0_Hp = 100;
    public int player_1_Hp = 100;

    // Start is called before the first frame update
    void Start()
    {
        //EventBus.Subscribe<StandardEvents.GestureFromAndroidEvent>(ChangeTestText);
        EventBus.Subscribe<StandardEvents.ChangeHPEvent>(ChangePlayerHP);
    }

    // Update is called once per frame
    void Update()
    {
        player_0_Name.text = GameController.username[0];
        player_1_Name.text = GameController.username[1];
    }

    /*
    void ChangeTestText(StandardEvents.GestureFromAndroidEvent e)
    {
        testText.text = e.message;
    }
    */

    void ChangePlayerHP(StandardEvents.ChangeHPEvent e)
    {
        if(e.username == GameController.username[0])
        {
            player_0_Hp += e.value;
            player_0_HpBar.value = player_0_Hp / 100f;
            player_0_HpText.text = (player_0_Hp).ToString() + "%";
        }
        else
        {
            player_1_Hp += e.value;
            player_1_HpBar.value = player_1_Hp / 100f;
            player_1_HpText.text = (player_1_Hp).ToString() + "%";
        }
    }
    
}
