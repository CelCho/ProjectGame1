using UnityEngine;

public class PickUpCoin : MonoBehaviour
{
    public GameObject toDestroy;
    public Vector3[] positions;

    void Start()
    {
        float posY = transform.position.y;
        int nbRandom = Random.Range(0, positions.Length);
        Vector3 positionActual = positions[nbRandom];
        positionActual.y += posY;
        transform.position = positionActual;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    { 
        if (collision.CompareTag("GroundCheck"))
        {
            Destroy(toDestroy);
        }
        if (collision.CompareTag("Player"))
        {
            Inventory.instance.AddCoins(1);
            //CurrentSceneManager.instance.coinsPickedUpInThisSceneCount++;
            Destroy(gameObject);
        }
    }
}
