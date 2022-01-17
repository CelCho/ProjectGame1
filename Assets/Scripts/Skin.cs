using UnityEngine;

[CreateAssetMenu(fileName = "Skin", menuName = "Inventory/Skin")]
public class Skin : ScriptableObject
{
    public int id;
    public string Name;
    public string description;
    public int price;
    public Sprite image;
    public bool isBuy;
}
