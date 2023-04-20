using UnityEngine;

public class CardReader : Puzzle
{
    public GameObject correctCard;

    void OnTriggerEnter(Collider c)
    {
        if (c.gameObject == correctCard)
        {
            Debug.Log("This is the correct card");
            this.Solve();
        }
    }
}
