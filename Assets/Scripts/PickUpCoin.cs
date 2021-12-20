using UnityEngine;

public class PickUpCoin : MonoBehaviour
{
    public GameObject toDestroy;

    private void OnTriggerEnter2D(Collider2D collision)
    { 
        if (collision.CompareTag("GroundCheck"))
        {
            Destroy(toDestroy);
        }
        if (collision.CompareTag("Player"))
        {
            Inventory.instance.AddCoins(1);
            Destroy(gameObject);
        }
    }
}
