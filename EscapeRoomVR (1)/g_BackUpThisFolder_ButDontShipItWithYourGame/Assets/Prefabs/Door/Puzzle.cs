using UnityEngine;

public class Puzzle : MonoBehaviour
{
    // event to tell the door that we completed this puzzle
    public delegate void SolveHandler(Puzzle p);
    public event SolveHandler Solved;

    public void Solve()
    {
        Solved?.Invoke(this);
    }
}
