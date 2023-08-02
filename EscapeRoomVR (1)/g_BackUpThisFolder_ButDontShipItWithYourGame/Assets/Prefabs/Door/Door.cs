using UnityEngine;

public class Door : MonoBehaviour
{
    private Animator _animator;

    void Awake()
    {
        _animator = GetComponent<Animator>();
    }

    protected void Open()
    {
        _animator.Play("open");
    }
}
