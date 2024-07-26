using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoundingBox : MonoBehaviour
{
    public ControlPoint Px, Py, Pz;
    public Vector3 addingSize;
    private Vector3 previousAddingSize;

    // Start is called before the first frame update
    void Start()
    {
        previousAddingSize = addingSize;
    }

    // Update is called once per frame
    void Update()
    {
        addingSize = new Vector3(Px.distance.x, Py.distance.y, Pz.distance.z);

        if (addingSize != previousAddingSize)
        {
            transform.localScale += (addingSize - previousAddingSize);
            previousAddingSize = addingSize;
        }
    }
}