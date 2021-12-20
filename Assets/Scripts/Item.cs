using UnityEngine;

[CreateAssetMenu(fileName = "Item", menuName = "Inventory/Item")]
public class Item : ScriptableObject
{
    public int id;
    public string Name;
    public string description;
    public int price;
    public Sprite image;
    public Animator animator;
    public int hpGiven;
    public float timeInvinsible;
    public float timeEffect;
    public int speedGiven;
    public float speedDuration;
}
