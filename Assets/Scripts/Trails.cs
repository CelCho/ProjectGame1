using UnityEngine;

[CreateAssetMenu(fileName = "Trails", menuName = "Inventory/Trails")]
public class Trails : ScriptableObject
{
    public int id;
    public string Name;
    public string description;
    public int price;
    public Sprite image;
    public bool isBuy;
}