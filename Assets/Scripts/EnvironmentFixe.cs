using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnvironmentFixe : MonoBehaviour
{
    public GameObject toDestroy;
    public Animator animator;

    private void OnTriggerEnter2D(Collider2D collision)
    {    
        if (collision.CompareTag("GroundCheck"))
        {
            Destroy(toDestroy);
        }
        
        if (collision.transform.CompareTag("Player") && ! PlayerHealth.instance.isInvincible)
        {
            animator.SetTrigger("Crach");   
            PlayerHealth.instance.TakeDamage(1);
        }
    }
}
