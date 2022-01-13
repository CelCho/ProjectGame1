using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnvironmentFixe : MonoBehaviour
{
    public GameObject toDestroy;
    public PolygonCollider2D box;
    public Animator animator;

    private void Update() 
    {
        if (transform.position.y < PlayerMovement.instance.transform.position.y - 0.5f)
        {
            StartCoroutine(BoxEnabled());
        }
        else
        {
            box.enabled = true;
        }
    }

    private IEnumerator BoxEnabled() 
    {
        box.enabled = false;
        while (transform.position.y >= PlayerMovement.instance.transform.position.y - 3)
        {
             yield return new WaitForSeconds(0.01f);
        }
        box.enabled = true;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {    
        if (collision.CompareTag("GroundCheck"))
        {
            Destroy(toDestroy);
        }
        else if (collision.transform.CompareTag("Player"))
        {
            animator.SetTrigger("Crach");   
            PlayerHealth.instance.TakeDamage(1);
        }
    }
}
