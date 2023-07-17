using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    public static List<string> username = new List<string>();

    // Start is called before the first frame update
    void Start()
    {
        while(username.Count < 2)
        {
            username.Add(null);
        }
        StartCoroutine(debuger());
    }

    void GameStart(string text)
    {
        StandardEvents.GameStartEvent obj = JsonUtility.FromJson<StandardEvents.GameStartEvent>(text);
        EventBus.Publish(obj);
        username[0] = obj.username0;
        username[1] = obj.username1;
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

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator debuger()
    {
        yield return new WaitForSeconds(1f);
        for (int i = 0; i <= 5; i++)
        {
            GameStart("{\"username0\": \"u1\", \"username1\": \"u2\"}");
            yield return new WaitForSeconds(5f);
            AddGestureBuffer("{\"username\": \"u2\", \"gesture\": \"Thumb_Up\"}");
            ReleaseSkill("{\"username\": \"u2\", \"skill\": \"fireball\"}");
        }

    }

}
