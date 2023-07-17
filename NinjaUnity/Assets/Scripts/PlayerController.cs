using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public int playerID;
    public GameObject fireBallPrefab;
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
        if (e.username == GameController.username[playerID])
        {
            StartCoroutine(FireBallLaunch());
        }
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
}
