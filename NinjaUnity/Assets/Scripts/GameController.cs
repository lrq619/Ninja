using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    public static List<string> username = new List<string>();
    public static int currentPlayerID;
    public List<GameObject> players = new List<GameObject>();
    public GameObject arrowPrefab;

    // Start is called before the first frame update
    void Start()
    {
        while(username.Count < 2)
        {
            username.Add(null);
        }
        // StartCoroutine(debuger());
    }

    void GameStart(string text)
    {
        StandardEvents.GameStartEvent obj = JsonUtility.FromJson<StandardEvents.GameStartEvent>(text);
        EventBus.Publish(obj);
        username[0] = obj.username0;
        username[1] = obj.username1;
        currentPlayerID = obj.player_id;
        GameObject arrow = Instantiate(arrowPrefab, players[obj.player_id].transform.position - new Vector3(0f, 1.3f, 0f), Quaternion.identity);
    }

    void AddGestureBuffer(string text)
    {
        StandardEvents.AddGestureBufferEvent obj = JsonUtility.FromJson<StandardEvents.AddGestureBufferEvent>(text);
        EventBus.Publish(obj);
    }

    void ChangeHP(string text)
    {
        StandardEvents.ChangeHPEvent obj = JsonUtility.FromJson<StandardEvents.ChangeHPEvent>(text);
        EventBus.Publish(obj);
    }

    void ReleaseSkill(string text)
    {
        StandardEvents.ReleaseSkillEvent obj = JsonUtility.FromJson<StandardEvents.ReleaseSkillEvent>(text);
        EventBus.Publish(obj);
    }

    void ClearGestureBuffer(string text)
    {
        StandardEvents.ClearGestureBufferEvent obj = JsonUtility.FromJson<StandardEvents.ClearGestureBufferEvent>(text);
        EventBus.Publish(obj);
    }

    void GameOver(string text)
    {
        StandardEvents.GameOverEvent obj = JsonUtility.FromJson<StandardEvents.GameOverEvent>(text);
        EventBus.Publish(obj);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator debuger()
    {
        yield return new WaitForSeconds(1f);
        GameStart("{\"username0\": \"u1\", \"username1\": \"u2\", \"player_id\": 1, \"room_id\": 0}");
        for (int i = 0; i <= 5; i++)
        { 
            AddGestureBuffer("{\"username\": \"u2\", \"gesture\": \"Thumb_Up\"}");

            yield return new WaitForSeconds(0.5f);

            AddGestureBuffer("{\"username\": \"u2\", \"gesture\": \"Open_Palm\"}");

            yield return new WaitForSeconds(0.5f);

            AddGestureBuffer("{\"username\": \"u2\", \"gesture\": \"ILoveYou\"}");

            ReleaseSkill("{\"username\": \"u1\", \"skill\": \"HEAVY_ATTACK\"}");            

            ReleaseSkill("{\"username\": \"u2\", \"skill\": \"LIGHT_ATTACK\"}");

            ChangeHP("{\"username\": \"u2\", \"value\": -20}");


            yield return new WaitForSeconds(1f);

            ReleaseSkill("{\"username\": \"u1\", \"skill\": \"LIGHT_SHIELD\"}");

            yield return new WaitForSeconds(1f);

            ReleaseSkill("{\"username\": \"u2\", \"skill\": \"HEAVY_SHIELD\"}");

            yield return new WaitForSeconds(2f);

            ReleaseSkill("{\"username\": \"u2\", \"skill\": \"BACK_NORMAL\"}");

            ClearGestureBuffer("{\"username\": \"u2\"}");


            yield return new WaitForSeconds(1f);

            GameOver("{\"winner\": \"u2\", \"loser\": \"u1\"}");

            yield return new WaitForSeconds(1f);

        }



    }




    public static void CallAndroidMethod(string methodName, string str)
    {
        using (var clsUnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
        {
            using (var objActivity = clsUnityPlayer.GetStatic<AndroidJavaObject>("currentActivity"))
            {
                objActivity.Call(methodName, str);
            }
        }
    }

}
