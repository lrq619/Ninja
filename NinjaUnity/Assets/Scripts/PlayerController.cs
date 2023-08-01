using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public int playerID;
    public GameObject fireBallPrefab;
    public GameObject shurikenPrefab;
    public GameObject bodyExplosionPrefab;
    public GameObject shieldObj;
    public GameObject earthWall;
    public GameObject fireWall;

    private Animator animator;
    private GameController game;
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        game = GameObject.Find("/GameController").GetComponent<GameController>();
        EventBus.Subscribe<StandardEvents.ReleaseSkillEvent>(ReleaseSkillOnPlayer);
        EventBus.Subscribe<StandardEvents.ChangeHPEvent>(BodyExplosionAnimation);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void BodyExplosionAnimation(StandardEvents.ChangeHPEvent e)
    {
        if (e.username != GameController.username[playerID])
            return;

        animator.SetTrigger("GetHit");
        GameObject explosion = Instantiate(bodyExplosionPrefab, transform.position, Quaternion.identity);
        StartCoroutine(ObjectDeleteInTime(explosion, 5f));
    }

    IEnumerator ObjectDeleteInTime(GameObject obj, float time)
    {
        yield return new WaitForSeconds(time);
        Destroy(obj);
    }


    void ReleaseSkillOnPlayer(StandardEvents.ReleaseSkillEvent e)
    {
        if (e.username != GameController.username[playerID])
            return;

        if (e.skill == "LIGHT_ATTACK")
        {
            animator.SetTrigger("GestureDetected");
            StartCoroutine(ShurikenLaunch());
        }
        else if (e.skill == "HEAVY_ATTACK")
        {
            animator.SetTrigger("GestureDetected");
            StartCoroutine(FireBallLaunch());
        }
        else if (e.skill == "LIGHT_SHIELD")
            StartCoroutine(DefendBehavior(0));
        else if (e.skill == "HEAVY_SHIELD")
            StartCoroutine(DefendBehavior(1));
        else if (e.skill == "BACK_NORMAL")
        {
            GetComponent<BoxCollider2D>().offset *= -1f;
            animator.SetBool("Defending", false);
            shieldObj.SetActive(false);
            earthWall.GetComponent<Animator>().SetBool("Defending",false);
            
            fireWall.GetComponent<Animator>().SetBool("Defending",false);
            // yield return new WaitForSeconds(0.5f);
            // earthWall.SetActive(false);
        }

    }

    IEnumerator DefendBehavior(int typeID)
    {
        if (typeID == 0) // Light_Sheild
        {
            animator.SetBool("Defending", true);
            GetComponent<BoxCollider2D>().offset *= -1f;
            // yield return new WaitForSeconds(0.5f);
            // shieldObj.transform.localScale = new Vector3(1f, 1f, 1f);
            // shieldObj.SetActive(true);
            
            // earthWall.transform.localPosition = new Vector3(1.2f,-0.6f,0f);
            fireWall.GetComponent<Animator>().SetBool("Defending",true);
            fireWall.SetActive(true);
            
        }
        else if (typeID == 1) // Heavy_Sheild
        {
            animator.SetBool("Defending", true);
            GetComponent<BoxCollider2D>().offset *= -1f;
            // yield return new WaitForSeconds(0.5f);
            // shieldObj.transform.localScale = new Vector3(2f, 2f, 2f);
            // shieldObj.SetActive(true);

            // earthWall.transform.localPosition = new Vector3(1.2f,-0.6f,0f);
            earthWall.GetComponent<Animator>().SetBool("Defending",true);
            earthWall.SetActive(true);
            
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
        float aimed_speed = Mathf.Abs(game.players[0].transform.position.x - game.players[1].transform.position.x) / 3f;
        fireball.GetComponent<FireBallController>().speed = playerDir.x * aimed_speed;
    }

    IEnumerator ShurikenLaunch()
    {
        Vector2 playerDir = new Vector2(1f, 0f);
        if (playerID == 1)
            playerDir = new Vector2(-1f, 0f);
        yield return new WaitForSeconds(1f);
        GameObject shuriken = Instantiate(shurikenPrefab, (Vector2)transform.position + playerDir, Quaternion.identity);
        shuriken.transform.localScale = new Vector3(-playerDir.x, 1f, 1f);
        float aimed_speed = Mathf.Abs(game.players[0].transform.position.x - game.players[1].transform.position.x) / 3f;
        shuriken.GetComponent<FireBallController>().speed = playerDir.x * aimed_speed;
        shuriken.GetComponent<FireBallController>().rotation_speed = 270f;
    }
}
