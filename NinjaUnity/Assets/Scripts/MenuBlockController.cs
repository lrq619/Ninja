using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuBlockController : MonoBehaviour
{
    public Text VictoryText;
    public Button ResumeButton;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    public void InitializeMenuInGame()
    {
        VictoryText.gameObject.SetActive(false);
        ResumeButton.gameObject.SetActive(true);
    }


    public void InitializeGameOverMenu(string text)
    {
        VictoryText.text = text;
        VictoryText.gameObject.SetActive(true);
        ResumeButton.gameObject.SetActive(false);
    }

    public void Onclick_Resume()
    {
        gameObject.SetActive(false);
    }

    public void Onclick_QuitGame()
    {
        //GameController.CallAndroidMethod("UnityrecvMessage", "quit_room");
        GameObject.Find("/GameController").GetComponent<GameController>().LetGameOver();
        gameObject.SetActive(false);
    }
}
