using UnityEngine;
using UnityEngine.UI;

public class Shop : MonoBehaviour
{
    public bool isAScene;
    public Scenes scene;

    public bool isASkin;
    public Skin skin;

    public bool isATrails;
    public Trails trails;

    public Text nameShop;
    public Image image;
    public Text price;

    public GameObject priceObject;
    public GameObject buy;
    public GameObject select;

    private void Start() 
    {
        if (isAScene)
        {
            nameShop.text = scene.Name;
            image.sprite = scene.image;
            price.text = scene.price.ToString();
            if (scene.isBuy)
            {
                ChangeButtonBuy();
            }
        }
        else if (isASkin)
        {
            nameShop.text = skin.Name;
            image.sprite = skin.image;
            price.text = skin.price.ToString();
            if (skin.isBuy)
            {
                ChangeButtonBuy();
            }
        }
        else if (isATrails)
        {
            nameShop.text = trails.Name;
            image.sprite = trails.image;
            price.text = trails.price.ToString();
            if (trails.isBuy)
            {
                ChangeButtonBuy();
            }
        }
    }

    public void Buy()
    {
        if (isAScene)
        {
            if (! scene.isBuy && (MainMenu.instance.data.coins - scene.price) >= 0)
            {
                MainMenu.instance.data.coins -= scene.price;

                scene.isBuy = true;

                ChangeButtonBuy();
                MainMenu.instance.data.SaveData();
            }
            else if (scene.isBuy)
            {
                MainMenu.instance.data.idScene = scene.id;
                MainMenu.instance.data.SaveData();
            }
        }
        else if (isASkin)
        {
            if (! skin.isBuy && (MainMenu.instance.data.coins - skin.price) >= 0)
            {
                MainMenu.instance.data.coins -= skin.price;

                skin.isBuy = true;

                ChangeButtonBuy();
                MainMenu.instance.data.SaveData();
            }
            else if (skin.isBuy)
            {
                MainMenu.instance.data.idSkin = skin.id;
                MainMenu.instance.data.SaveData();
            }
        }
        else if (isATrails)
        {
            if (! trails.isBuy && (MainMenu.instance.data.coins - trails.price) >= 0)
            {
                MainMenu.instance.data.coins -= trails.price;

                trails.isBuy = true;

                ChangeButtonBuy();
                MainMenu.instance.data.SaveData();
            }
            else if (trails.isBuy)
            {
                MainMenu.instance.data.idTrails = trails.id;
                MainMenu.instance.data.SaveData();
            }
        }

    }

    public void ChangeButtonBuy()
    {
        priceObject.SetActive(false);
        buy.SetActive(false);
        select.SetActive(true);
    }
}
