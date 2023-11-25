using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FixedSize : MonoBehaviour
{

Vector3 parentScale;
Vector3 selfScale;
Vector3 scale;

private void Start()
{
scale = transform.localScale;
}

private void Update()
{
parentScale = transform.parent.localScale;
selfScale = new Vector3 (scale.x / parentScale.x, scale.y / parentScale.y, scale.z / parentScale.z);
transform.localScale = selfScale;
}
}