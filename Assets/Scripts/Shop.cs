using UnityEngine;
using UnityEngine.UI;

public class Shop : MonoBehaviour
{
    public bool isAItem;
    public Item item;

    public bool isASkin;
    public Skin skin;

    public Text nameShop;
    public Image image;
    public Text price;

    public Slider slider;
    public Gradient gradient;
    public Image fill;

    public GameObject toDestroy;

    private void Start() 
    {
        if (isAItem)
        {
            nameShop.text = item.Name;
            image.sprite = item.image;
            price.text = item.price.ToString();

            SetMaxNiv(item.nivMax);
            SetNiv(item.niv);
        }
        else if (isASkin)
        {
            nameShop.text = skin.Name;
            image.sprite = skin.image;
            price.text = skin.price.ToString();
        }
    }

    public void Buy()
    {
        if (isAItem)
        {
            if ((MainMenu.instance.coinsCount - item.price) >= 0 && item.niv < item.nivMax)
            {
                MainMenu.instance.coinsCount -= item.price;

                ModifItem();

                if (item.niv == item.nivMax)
                {
                    Destroy(toDestroy);
                }

                SetNiv(item.niv);
                price.text = item.price.ToString();
                MainMenu.instance.UpdateInventory();
            }    
        }
        else if (isASkin)
        {
            if ((MainMenu.instance.coinsCount - skin.price) >= 0)
            {
                MainMenu.instance.coinsCount -= skin.price;

                skin.IsBuy = true;

                Destroy(toDestroy);
            }
        }
    }

    public void ModifItem()
    {
        item.niv += 1;
        item.price += 50;
        if (item.timeInvinsible != 0)
        {
            item.timeInvinsible += 5;
        }
        if (item.timeEffect != 0)
        {
            item.timeEffect += 5;
        }
        if (item.speedGiven != 0)
        {
            item.speedGiven += 1;
        }
        if (item.speedDuration != 0)
        {
            item.speedDuration += 5;
        }
        if (item.hpShield != 0)
        {
            item.hpShield += 0.5f;
        }
    }

    public void SetMaxNiv(int niv)
    {
        slider.maxValue = niv;
        slider.value = niv;

        fill.color = gradient.Evaluate(1f);
    }

    public void SetNiv(int niv)
    {
        slider.value = niv;

        fill.color = gradient.Evaluate(slider.normalizedValue);
    }
}
