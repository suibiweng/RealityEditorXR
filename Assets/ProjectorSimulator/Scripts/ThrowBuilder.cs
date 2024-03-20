using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThrowBuilder : MonoBehaviour
{
    Mesh mesh = null;
    MeshFilter mf;
    MeshRenderer mr;

    // TODO:- raycast in between vertices
    //       - position vertices on raycast hit points instead of constant plane? what if no hit?
    public void BuildThrow(float throwRatio, float aspect, Vector2 shift_percentage, float maxDistance, bool stopAtCollision, Material throwMaterial)
    {
        mf = GetComponent<MeshFilter>();
        mr = GetComponent<MeshRenderer>();
        mr.material = throwMaterial;

        // calculate vertex positions at temp distance (for raycasting direction)
        float tempDistance = 10.0f;
        float imageWidth = tempDistance / throwRatio;
        float imageHeight = imageWidth / aspect;

        // calculate shift in meters
        Vector2 shift_meters = new Vector2(imageWidth * (shift_percentage.x / 200.0f),
                                            imageHeight * (shift_percentage.y / 200.0f));
        float rightEdge = (imageWidth / 2.0f) + shift_meters.x;
        float topEdge = (imageHeight / 2.0f) + shift_meters.y;

        //mesh = new Mesh();
        Vector3[] vertices = new Vector3[5]; //TODO: more vertices around edges of throw

        // first vertex at end of lens
        vertices[0] = Vector3.zero;

        // TEMP VERTICES - clockwise around image, starting with top-left
        vertices[1] = new Vector3(rightEdge - imageWidth, topEdge, tempDistance);
        vertices[2] = new Vector3(rightEdge, topEdge, tempDistance);
        vertices[3] = new Vector3(rightEdge, topEdge - imageHeight, tempDistance);
        vertices[4] = new Vector3(rightEdge - imageWidth, topEdge - imageHeight, tempDistance);

        // choose a new distance - either max lens throw or furthest intersecting point on screen
        float maxFoundDistance = -1.0f;

        if (stopAtCollision)
        {
            for (int i = 1; i < vertices.Length; i++)
            {
                // cast a ray from the lens centre through the temporary vertex - if we hit something, use the largest distance TODO: make maxDistance take angle into account
                RaycastHit[] hits = Physics.RaycastAll(transform.position, transform.localToWorldMatrix * vertices[i], maxDistance);
                foreach (RaycastHit hit in hits)
                {
                    // use trig to calculate forward distance
                    float angle = Vector3.Angle(Vector3.forward, vertices[i].normalized);
                    float forwardDistance = Mathf.Cos(angle * Mathf.Deg2Rad) * hit.distance;
                    if (forwardDistance > maxFoundDistance)
                        maxFoundDistance = forwardDistance;
                }
            }

            if (maxFoundDistance < 0) // no collision found
                maxFoundDistance = maxDistance;
        }
        else // collision set to ignored
        {
            maxFoundDistance = maxDistance;
        }

        // recalculate vertex positions at new distance
        imageWidth = maxFoundDistance / throwRatio;
        imageHeight = imageWidth / aspect;
        rightEdge = (imageWidth / 2.0f) + (imageWidth * shift_percentage.x / 200f);
        topEdge = (imageHeight / 2.0f) + (imageHeight * shift_percentage.y / 200f);

        // FINAL VERTICES - clockwise around image, starting with top-left
        vertices[1] = new Vector3(rightEdge - imageWidth, topEdge, maxFoundDistance);
        vertices[2] = new Vector3(rightEdge, topEdge, maxFoundDistance);
        vertices[3] = new Vector3(rightEdge, topEdge - imageHeight, maxFoundDistance);
        vertices[4] = new Vector3(rightEdge - imageWidth, topEdge - imageHeight, maxFoundDistance);

        int numTriangles = 4;
        int[] indices = new int[numTriangles * 3];

        // build triangles
        for (int i = 0; i < numTriangles - 1; i++)
        {
            indices[i * 3 + 0] = 0;
            indices[i * 3 + 1] = i + 1;
            indices[i * 3 + 2] = i + 2;
        }

        // last triangle
        indices[indices.Length - 3] = 0; // lens vertex
        indices[indices.Length - 2] = numTriangles; // final vertex
        indices[indices.Length - 1] = 1; // loop back round to first vertex

        if (mesh == null)
            mesh = new Mesh();

        mesh.vertices = vertices;
        mesh.triangles = indices;
        mesh.RecalculateNormals();

        // this triggers a warning in the editor during OnValidate but it should not matter (please don't judge me)
        mf.sharedMesh = mesh;
    }
}