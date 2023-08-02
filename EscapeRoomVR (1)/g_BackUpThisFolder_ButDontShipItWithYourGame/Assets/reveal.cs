using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class reveal : MonoBehaviour
{
    public GameObject spot;
    public RaycastHit hit;
    public float maxDistance;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Ray ray = new Ray(transform.position, transform.forward);

        if (Physics.Raycast(ray, out hit, maxDistance))
        {
            Debug.Log(hit.point);
        }
    }
}
