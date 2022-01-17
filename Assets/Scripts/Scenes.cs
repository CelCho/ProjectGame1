using UnityEngine;

[CreateAssetMenu(fileName = "Scenes", menuName = "Inventory/Scenes")]
public class Scenes : ScriptableObject
{
    public int id;
    public string Name;
    public string description;
    public int price;
    public Sprite image;
    public bool isBuy;
}