using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class makeVisible : MonoBehaviour
{
    Vector3 trackingPoint;
    public GameObject flashlight;
    public reveal reveal;
    Color color;
    TextMeshPro TMP;
    

    void Start()
    {
        //color = GetComponent<Renderer>().material.color;
        TMP = GetComponent<TextMeshPro>();
        color = TMP.color;
        
        
    }

    // Update is called once per frame
    void Update()
    {
        trackingPoint = reveal.hit.point;
        float test = Vector3.Distance(trackingPoint, transform.position);
        if (trackingPoint != null && Vector3.Distance(trackingPoint, transform.position) < .5f)
        {
            float one = (4f - Vector3.Distance(flashlight.transform.position, transform.position)) * .25f;
            float two = (.5f - Vector3.Distance(trackingPoint, transform.position)) * 2f;
            color.a = Mathf.Min(one, two);
            TMP.color = color;
        }
        else
        {
            color.a = 0;
            TMP.color = color;
        }
    }
}
