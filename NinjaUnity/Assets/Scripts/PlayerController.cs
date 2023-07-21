using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public int playerID;
    public GameObject fireBallPrefab;
    public GameObject shurikenPrefab;
    private Animator animator;
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        EventBus.Subscribe<StandardEvents.AddGestureBufferEvent>(GestureAnimation);
        EventBus.Subscribe<StandardEvents.ReleaseSkillEvent>(ReleaseSkillOnPlayer);
    }

    // Update is called once per frame
    void Update()
    {
        
    }



    void GestureAnimation(StandardEvents.AddGestureBufferEvent e)
    {
        if(e.username == GameController.username[playerID])
        {
            animator.SetTrigger("GestureDetected");
        }
    }

    void ReleaseSkillOnPlayer(StandardEvents.ReleaseSkillEvent e)
    {
        if (e.username != GameController.username[playerID])
            return;

        if (e.skill == "LIGHT_ATTACK")
        {
            StartCoroutine(ShurikenLaunch());
        }
        else if (e.skill == "HEAVY_ATTACK")
        {
            StartCoroutine(FireBallLaunch());
        }
        else if (e.skill == "LIGHT_SHIELD")
            StartCoroutine(DefendBehavior(0));
        else if (e.skill == "HEAVY_SHIELD")
            StartCoroutine(DefendBehavior(1));
    }

    IEnumerator DefendBehavior(int typeID)
    {
        if (typeID == 0) // Light_Sheild
        {
            animator.SetBool("Defending", true);
            GetComponent<BoxCollider2D>().offset *= -1f;
            yield return new WaitForSeconds(GameController.lightDefendDuration);
            GetComponent<BoxCollider2D>().offset *= -1f;
            animator.SetBool("Defending", false);
        }
        else if (typeID == 1) // Heavy_Sheild
        {
            animator.SetBool("Defending", true);
            GetComponent<BoxCollider2D>().offset *= -1f;
            yield return new WaitForSeconds(GameController.heavyDefendDuration);
            GetComponent<BoxCollider2D>().offset *= -1f;
            animator.SetBool("Defending", false);
        }
        yield return null;
    }

    IEnumerator FireBallLaunch()
    {
        Vector2 playerDir = new Vector2(1f, 0f);
        if (playerID == 1)
            playerDir = new Vector2(-1f, 0f);
        yield return new WaitForSeconds(1f);
        GameObject fireball = Instantiate(fireBallPrefab, (Vector2)transform.position + playerDir, Quaternion.identity);
        fireball.transform.localScale = new Vector3(-playerDir.x, 1f, 1f);
        fireball.GetComponent<FireBallController>().speed = playerDir.x;
    }

    IEnumerator ShurikenLaunch()
    {
        Vector2 playerDir = new Vector2(1f, 0f);
        if (playerID == 1)
            playerDir = new Vector2(-1f, 0f);
        yield return new WaitForSeconds(1f);
        GameObject shuriken = Instantiate(shurikenPrefab, (Vector2)transform.position + playerDir, Quaternion.identity);
        shuriken.transform.localScale = new Vector3(-playerDir.x, 1f, 1f);
        shuriken.GetComponent<FireBallController>().speed = playerDir.x;
        shuriken.GetComponent<FireBallController>().rotation_speed = 1f;
    }
}
