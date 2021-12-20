using UnityEngine;
using UnityEngine.UI;

public class PickUpItem : MonoBehaviour
{
    public Item item;

    public GameObject toDestroy;

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
        if (collision.CompareTag("Player"))
        {
            TakeItem();
        }
    }
}
