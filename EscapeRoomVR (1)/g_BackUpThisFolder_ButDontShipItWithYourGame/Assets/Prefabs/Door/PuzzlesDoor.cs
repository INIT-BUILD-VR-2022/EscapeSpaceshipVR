using UnityEngine;

public class PuzzlesDoor : Door
{
    public Puzzle[] puzzles;
    private int puzzlesLeft;
    public AudioSource doorOpenAudio;
    // teleportation area to activate after the door opens
    public GameObject nextTeleportationArea;

    void Start()
    {
        puzzlesLeft = puzzles.Length;
        foreach (Puzzle p in puzzles)
        {
            p.Solved += Complete;
        }
    }

    protected void Complete(Puzzle p)
    {
        // unsubscribe event from the puzzle
        for (int i=0; i < puzzles.Length; i++)
        {
            if (puzzles[i] == p)
            {
                puzzles[i].Solved -= Complete;
            }
        }

        puzzlesLeft--;
        Debug.Log("Puzzles left: " + puzzlesLeft);
        if (puzzlesLeft == 0)
        {
            this.Open();
            doorOpenAudio.Play();
            nextTeleportationArea?.SetActive(true);
        }
    }
}
