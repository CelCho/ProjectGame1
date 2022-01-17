using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SlideManager : MonoBehaviour
{
    public Data data;

    public Animator[] animatorsSlide;

    private void Awake() 
    {
        foreach (var anima in animatorsSlide)
        {
            anima.SetInteger("IdScene", data.idScene);
        }    
    }
}
