using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BufferController : MonoBehaviour
{
    public List<GameObject> gesturePrefabs;
    public List<GameObject> existingGestures;
    // Start is called before the first frame update
    void Start()
    {
        EventBus.Subscribe<StandardEvents.GestureFromAndroidEvent>(EnqueueGesture);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void EnqueueGesture(StandardEvents.GestureFromAndroidEvent e)
    {
        GameObject newGestureIcon = null;
        if (e.message == "Thumb_Up")
        {
            newGestureIcon = Instantiate(gesturePrefabs[0], (Vector2)transform.position + new Vector2(-0.5f, 0f), Quaternion.identity);
            
        }
        else if (e.message == "ILoveYou")
        {
            newGestureIcon = Instantiate(gesturePrefabs[1], (Vector2)transform.position + new Vector2(-0.5f, 0f), Quaternion.identity);
        }


        if(newGestureIcon != null)
        {
            if (existingGestures.Count > 0)
            {
                foreach (GameObject g in existingGestures)
                {
                    g.transform.position += new Vector3(1f, 0f);
                }
            }
            existingGestures.Add(newGestureIcon);
        }
    }
}
