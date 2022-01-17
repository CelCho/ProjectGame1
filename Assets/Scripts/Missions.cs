using UnityEngine;

[CreateAssetMenu(fileName = "Missions", menuName = "Inventory/Missions")]
public class Missions : ScriptableObject
{
    public int id;
    public string title;
    public string description;
    public Sprite image;
    public bool activate;
    public bool finish;
}
