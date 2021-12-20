using UnityEngine;
using UnityEngine.UI;

public class PickUpItem : MonoBehaviour
{
    public Item apple;
    public Item goldenApple;
    public Item item;

    public Vector3[] positions;

    public Animator animator;
    public GameObject toDestroy;

    private void Start() 
    {
        int nbRandom = Random.Range(0, 101);
        if (nbRandom <= 50)
        {
            item = apple;

        }
        else if (nbRandom > 50)
        {
            item = goldenApple;
        }

        animator.SetTrigger(item.Name.ToString());

        float posY = transform.position.y;
        int nbRandoms = Random.Range(0, positions.Length);
        Vector3 positionActual = positions[nbRandoms];
        positionActual.y += posY;
        transform.position = positionActual;
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.E))
        {
            TakeItem();
        }
    }

    void TakeItem()
    {
        /*Inventory.instance.content.Add(item);
        Inventory.instance.UpdateInventoryUI();
        interactUI.enabled = false;*/
        Inventory.instance.ConsumeItem(item);
        Destroy(toDestroy);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    { 
        if (collision.CompareTag("GroundCheck"))
        {
            Destroy(toDestroy);
        }
        else if (collision.CompareTag("Player"))
        {
            TakeItem();
        }
    }
}
