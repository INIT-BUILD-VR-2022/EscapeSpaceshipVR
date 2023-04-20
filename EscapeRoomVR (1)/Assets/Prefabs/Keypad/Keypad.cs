 using System.Collections;
using TMPro;
using UnityEngine;

public class Keypad : Puzzle
{
    [SerializeField] private string correctPassword;
    
    public TextMeshProUGUI displayText;
    private string successText = "sccs";
    private string failureText = "fail";
    [SerializeField] private Color successColor;
    [SerializeField] private Color failureColor;
    private Color defaultDisplayTextColor;

    private string enteredPassword;
    private enum State { Empty, Entered, Success, Failure}
    private State state;

    // audio
    public AudioSource keyPadAudio;
    public AudioClip buttonClickSound;
    public AudioClip successSound;
    public AudioClip failureSound;

    void Awake()
    {
        defaultDisplayTextColor = displayText.color;

        if (correctPassword.Length == 0)
        {
            Debug.LogWarning("Keypad password not set.");
        }
        else
        {
            correctPassword = correctPassword.ToUpper();
        }
        ResetEnteredPassword();
    }
    private void ResetEnteredPassword()
    {
        state = State.Empty;
        enteredPassword = "";
        displayText.color = defaultDisplayTextColor;
    }
    public void UpdateEnteredPassword(string num)
    {
        Debug.Log("Correct password: " + correctPassword + ", Entered password: " + enteredPassword);
        enteredPassword = enteredPassword.ToUpper();
        if (enteredPassword.Length < correctPassword.Length)
        {
            state = State.Entered;
            enteredPassword += num;
            UpdateDisplayText();
        }
        if (enteredPassword.Length == correctPassword.Length)
        {
            if (correctPassword == enteredPassword)
            {
                state = State.Success;
            }
            else
            {
                state = State.Failure;
            }
            UpdateDisplayText();
        }
        
    }

    private void UpdateDisplayText()
    {
        switch (state)
        {
            case State.Empty:
                // display number of dots based on correct password length
                string dots = "";
                for (int i = 0; i < correctPassword.Length - 1; i++)
                {
                    dots += ". ";
                }
                dots += ".";
                displayText.text = dots;
                break;
            case State.Entered:
                // display numbers
                keyPadAudio.PlayOneShot(buttonClickSound);
                displayText.text = enteredPassword;
                break;
            case State.Failure:
                // failure
                keyPadAudio.PlayOneShot(failureSound);
                StartCoroutine(DisplayResultText(failureText, failureColor));
                break;
            case State.Success:
                // success
                keyPadAudio.PlayOneShot(successSound);
                this.Solve();
                StartCoroutine(DisplayResultText(successText, successColor));
                break;
        }
    }

    private IEnumerator DisplayResultText(string txtToDisplay, Color txtColor)
    {
        yield return new WaitForSecondsRealtime(0);
        displayText.color = txtColor;
        displayText.text = txtToDisplay;
        yield return new WaitForSecondsRealtime(2);
        ResetEnteredPassword();
        UpdateDisplayText();
    }
}
