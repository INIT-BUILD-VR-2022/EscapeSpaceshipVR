using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ButtonTestScrpt : MonoBehaviour
{
    [SerializeField] private float threshold = .1f;
    [SerializeField] private float deadZone = 0.025f;

    //Creates a Handle for each Button Labeled Push
   

    public bool Switchstate;
    private bool isPressed;
    private Vector3 _startPos;
    private ConfigurableJoint _joint;

    public Material ButtonOff;
    public Material Buttonon;

    public AudioSource clip;
    public GameObject screen;

    public UnityEvent onPressed, OnRleased;
    
    void Start()
    {
        Switchstate= false; // Buttons start off
        _startPos = transform.localPosition;
        _joint = GetComponent<ConfigurableJoint>();
    }

    // Update is called once per frame
    void Update()
    {
        Renderer ren = GetComponent<Renderer>(); //Creates a handle to input the material it changes to
        if (Switchstate) // reads If the button is on or off and gives it a material based on its bool value 
        {
            ren.material = Buttonon;
        }
        if (!Switchstate)
        {
            ren.material = ButtonOff;
        }
        if (!isPressed && GetValue() + threshold >= 1)
        {
            Pressed();
        }
        if(isPressed && GetValue() - threshold <=0)
        {
            Released();
        }
        CheckWin();

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
        Switchstate = !Switchstate; // Changes the button to the opposite state on every press
        Debug.Log("pressed");
        ButtonSwitcher();
        
        clip.Play();

    }
    private void Released()
    {
        isPressed = false;
        Debug.Log("Released");
        
    }

    private void ButtonSwitcher()
    {
        // Handle for each button 
        GameObject Push1 = GameObject.FindGameObjectWithTag("Push1");
        GameObject Push2 = GameObject.FindGameObjectWithTag("Push2");
        GameObject Push3 = GameObject.FindGameObjectWithTag("Push3");
        GameObject Push4 = GameObject.FindGameObjectWithTag("Push4");
        GameObject Push5 = GameObject.FindGameObjectWithTag("Push5");
        GameObject Push6 = GameObject.FindGameObjectWithTag("Push6");
        GameObject Push7 = GameObject.FindGameObjectWithTag("Push7");
        GameObject Push8 = GameObject.FindGameObjectWithTag("Push8");
        GameObject Push9 = GameObject.FindGameObjectWithTag("Push9");
        // Code for each button to change its corresponding button around to it
        if (gameObject.tag == "Push1")
        {
            Push2.GetComponent<ButtonTestScrpt>().Switchstate = !Push2.GetComponent<ButtonTestScrpt>().Switchstate;
            Push4.GetComponent<ButtonTestScrpt>().Switchstate = !Push4.GetComponent<ButtonTestScrpt>().Switchstate;
        }
        if (gameObject.tag == "Push2")
        {
            Push1.GetComponent<ButtonTestScrpt>().Switchstate = !Push1.GetComponent<ButtonTestScrpt>().Switchstate;
            Push3.GetComponent<ButtonTestScrpt>().Switchstate = !Push3.GetComponent<ButtonTestScrpt>().Switchstate;
            Push5.GetComponent<ButtonTestScrpt>().Switchstate = !Push5.GetComponent<ButtonTestScrpt>().Switchstate;
        }
        if (gameObject.tag == "Push3")
        {
            Push2.GetComponent<ButtonTestScrpt>().Switchstate = !Push2.GetComponent<ButtonTestScrpt>().Switchstate;
            Push6.GetComponent<ButtonTestScrpt>().Switchstate = !Push6.GetComponent<ButtonTestScrpt>().Switchstate;
        }
        if (gameObject.tag == "Push4")
        {
            Push1.GetComponent<ButtonTestScrpt>().Switchstate = !Push1.GetComponent<ButtonTestScrpt>().Switchstate;
            Push5.GetComponent<ButtonTestScrpt>().Switchstate = !Push5.GetComponent<ButtonTestScrpt>().Switchstate;
            Push7.GetComponent<ButtonTestScrpt>().Switchstate = !Push7.GetComponent<ButtonTestScrpt>().Switchstate;
        }
        if (gameObject.tag == "Push5")
        {
            Push2.GetComponent<ButtonTestScrpt>().Switchstate = !Push2.GetComponent<ButtonTestScrpt>().Switchstate;
            Push4.GetComponent<ButtonTestScrpt>().Switchstate = !Push4.GetComponent<ButtonTestScrpt>().Switchstate;
            Push6.GetComponent<ButtonTestScrpt>().Switchstate = !Push6.GetComponent<ButtonTestScrpt>().Switchstate;
            Push8.GetComponent<ButtonTestScrpt>().Switchstate = !Push8.GetComponent<ButtonTestScrpt>().Switchstate;
        }
        if (gameObject.tag == "Push6")
        {
            Push3.GetComponent<ButtonTestScrpt>().Switchstate = !Push3.GetComponent<ButtonTestScrpt>().Switchstate;
            Push5.GetComponent<ButtonTestScrpt>().Switchstate = !Push5.GetComponent<ButtonTestScrpt>().Switchstate;
            Push9.GetComponent<ButtonTestScrpt>().Switchstate = !Push9.GetComponent<ButtonTestScrpt>().Switchstate;
        }

        if (gameObject.tag == "Push7")
        {
            Push4.GetComponent<ButtonTestScrpt>().Switchstate = !Push4.GetComponent<ButtonTestScrpt>().Switchstate;
            Push8.GetComponent<ButtonTestScrpt>().Switchstate = !Push8.GetComponent<ButtonTestScrpt>().Switchstate;
        }
        if (gameObject.tag == "Push8")
        {
            Push5.GetComponent<ButtonTestScrpt>().Switchstate = !Push5.GetComponent<ButtonTestScrpt>().Switchstate;
            Push7.GetComponent<ButtonTestScrpt>().Switchstate = !Push7.GetComponent<ButtonTestScrpt>().Switchstate;
            Push9.GetComponent<ButtonTestScrpt>().Switchstate = !Push9.GetComponent<ButtonTestScrpt>().Switchstate;
        }
        if (gameObject.tag == "Push9")
        {
            Push6.GetComponent<ButtonTestScrpt>().Switchstate = !Push6.GetComponent<ButtonTestScrpt>().Switchstate;
            Push8.GetComponent<ButtonTestScrpt>().Switchstate = !Push8.GetComponent<ButtonTestScrpt>().Switchstate;
        }


    }
    public void CheckWin()
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
        // if switchstate is true that automatically means button is on, Just drop whatever starts the next puzzle in this if statement;
        if (Push1.GetComponent<ButtonTestScrpt>().Switchstate == true && Push2.GetComponent<ButtonTestScrpt>().Switchstate == true
            && Push3.GetComponent<ButtonTestScrpt>().Switchstate == true && Push4.GetComponent<ButtonTestScrpt>().Switchstate == true
             && Push5.GetComponent<ButtonTestScrpt>().Switchstate == true && Push6.GetComponent<ButtonTestScrpt>().Switchstate == true
              && Push7.GetComponent<ButtonTestScrpt>().Switchstate == true && Push8.GetComponent<ButtonTestScrpt>().Switchstate == true
               && Push9.GetComponent<ButtonTestScrpt>().Switchstate == true)
        {
            screen.SetActive(true);
            Debug.Log("hello");
        }

    }

}