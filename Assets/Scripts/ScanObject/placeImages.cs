using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using System.IO;



public static class MatrixExtensions
{
    public static Quaternion ExtractRotation(this Matrix4x4 matrix)
    {
        Vector3 forward;
        forward.x = matrix.m02;
        forward.y = matrix.m12;
        forward.z = matrix.m22;

        Vector3 upwards;
        upwards.x = matrix.m01;
        upwards.y = matrix.m11;
        upwards.z = matrix.m21;

        return Quaternion.LookRotation(forward, upwards);
    }

    public static Vector3 ExtractPosition(this Matrix4x4 matrix)
    {
        Vector3 position;
        position.x = matrix.m03;
        position.y = matrix.m13;
        position.z = matrix.m23;
        return position;
    }

    public static Vector3 ExtractScale(this Matrix4x4 matrix)
    {
        Vector3 scale;
        scale.x = new Vector4(matrix.m00, matrix.m10, matrix.m20, matrix.m30).magnitude;
        scale.y = new Vector4(matrix.m01, matrix.m11, matrix.m21, matrix.m31).magnitude;
        scale.z = new Vector4(matrix.m02, matrix.m12, matrix.m22, matrix.m32).magnitude;
        return scale;
    }
}





public class placeImages : MonoBehaviour
{
    [SerializeField] private GameObject framePlane;

    


    // Start is called before the first frame update
    void Start()
    {
   


        string myContent = System.IO.File.ReadAllText("Assets/students.csv");


        if (myContent != null)
        {
            string[] frameData = myContent.Split('\n');
            int frameLength = frameData.Length;
            print(frameData[0]);
            print(frameLength);




            for (int i = 0; i < 226; i++)
            {
                string[] transformationData = frameData[i].Split(',');

                Matrix4x4 frameTransformation = new Matrix4x4();
                for (int j =0;j < 16; j+=4)
                {
                    Vector4 rowData = new Vector4(float.Parse(transformationData[j]), float.Parse(transformationData[j+1]), float.Parse(transformationData[j+2]), float.Parse(transformationData[j+3]));
                    frameTransformation.SetRow(j / 4, rowData);
                    

                }
                //print(frameTransformation[0, 2]);
                //frameTransformation *= coordinatesTransform;
                GameObject myFrame = Instantiate(framePlane);
                myFrame.transform.position = frameTransformation.ExtractPosition();
                //myFrame.transform.position = new Vector3(myFrame.transform.position.x, myFrame.transform.position.z, myFrame.transform.position.y);
                myFrame.transform.rotation = frameTransformation.ExtractRotation();
                //myFrame.transform.localScale = frameTransformation.ExtractScale();

            }


        }





        //print(data.frames[0].file_path);
        //print(data.frames[0].transform_matrix[2]);


    }

    // Update is called once per frame
    void Update()
    {
        
    }
}





