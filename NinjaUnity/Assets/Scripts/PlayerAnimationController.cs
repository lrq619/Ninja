using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAnimationController : MonoBehaviour
{
    private Animator animator;
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        EventBus.Subscribe<StandardEvents.GestureFromAndroidEvent>(GestureAnimation);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void GestureAnimation(StandardEvents.GestureFromAndroidEvent e)
    {
        animator.SetTrigger("GestureDetected");
    }

 }
