using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Reset : MonoBehaviour
{
    [SerializeField] private float threshold = .1f;
    [SerializeField] private float deadZone = 0.025f;

    //Creates a Handle for each Button Labeled Push



    private bool isPressed;
    private Vector3 _startPos;
    private ConfigurableJoint _joint;



    public AudioSource clip;

    public UnityEvent onPressed, OnRleased;

    void Start()
    {

        _startPos = transform.localPosition;
        _joint = GetComponent<ConfigurableJoint>();
    }

    // Update is called once per frame
    void Update()
    {

        if (!isPressed && GetValue() + threshold >= 1)
        {
            Pressed();
        }
        if (isPressed && GetValue() - threshold <= 0)
        {
            Released();
        }


    }

    private float GetValue()
    {
        var value = Vector3.Distance(_startPos, transform.localPosition) / _joint.linearLimit.limit;
        if (Mathf.Abs(value) < deadZone)
        {
            value = 0;
        }
        return Mathf.Clamp(value, -1f, 1f);
    }
    private void Pressed()
    {
        isPressed = true;

        Debug.Log("pressed");
        buttonreseter();

        clip.Play();

    }
    private void Released()
    {
        isPressed = false;
        Debug.Log("Released");

    }
    private void buttonreseter()
    {
        GameObject Push1 = GameObject.FindGameObjectWithTag("Push1");
        GameObject Push2 = GameObject.FindGameObjectWithTag("Push2");
        GameObject Push3 = GameObject.FindGameObjectWithTag("Push3");
        GameObject Push4 = GameObject.FindGameObjectWithTag("Push4");
        GameObject Push5 = GameObject.FindGameObjectWithTag("Push5");
        GameObject Push6 = GameObject.FindGameObjectWithTag("Push6");
        GameObject Push7 = GameObject.FindGameObjectWithTag("Push7");
        GameObject Push8 = GameObject.FindGameObjectWithTag("Push8");
        GameObject Push9 = GameObject.FindGameObjectWithTag("Push9");

        Push1.GetComponent<ButtonTestScrpt>().Switchstate = false;
        Push2.GetComponent<ButtonTestScrpt>().Switchstate = false;
        Push3.GetComponent<ButtonTestScrpt>().Switchstate = false;
        Push4.GetComponent<ButtonTestScrpt>().Switchstate = false;
        Push5.GetComponent<ButtonTestScrpt>().Switchstate = false;
        Push6.GetComponent<ButtonTestScrpt>().Switchstate = false;
        Push7.GetComponent<ButtonTestScrpt>().Switchstate = false;
        Push8.GetComponent<ButtonTestScrpt>().Switchstate = false;
        Push9.GetComponent<ButtonTestScrpt>().Switchstate = false;
    }
}
