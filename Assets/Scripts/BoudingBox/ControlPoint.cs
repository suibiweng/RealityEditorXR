using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus.Interaction;

public enum AxisDirection
{
    X, Y, Z
}

public class ControlPoint : MonoBehaviour
{
    public AxisDirection axisDirection;
    public Grabbable grabbable;

    private Vector3 originalPos;
    private Vector3 originalScale;
    public Vector3 distance;

    // Start is called before the first frame update
    void Start()
    {
        originalPos = transform.localPosition;
        originalScale = transform.localScale;

        grabbable = GetComponentInChildren<Grabbable>();
    }

    // Update is called once per frame
    void Update()
    {
        // Adjust the local scale to maintain the original size
        Vector3 parentScale = transform.parent ? transform.parent.localScale : Vector3.one;
        transform.localScale = new Vector3(
            originalScale.x / parentScale.x,
            originalScale.y / parentScale.y,
            originalScale.z / parentScale.z
        );

        distance = transform.localPosition - originalPos;

        if (grabbable.SelectingPointsCount > 0) // is grabbing
        {
            // Grabbing logic here if needed
        }
        else
        {
            switch (axisDirection)
            {
                case AxisDirection.X:
                    transform.localPosition = new Vector3(transform.localPosition.x, 0, 0);
                    break;

                case AxisDirection.Y:
                    transform.localPosition = new Vector3(0, transform.localPosition.y, 0);
                    break;

                case AxisDirection.Z:
                    transform.localPosition = new Vector3(0, 0, transform.localPosition.z);
                    break;
            }
        }
    }
}
