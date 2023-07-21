using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BufferController : MonoBehaviour
{
    public int playerID;
    public List<GameObject> gesturePrefabs;
    public List<GameObject> existingGestures;
    // Start is called before the first frame update
    void Start()
    {
        EventBus.Subscribe<StandardEvents.AddGestureBufferEvent>(EnqueueGesture);
        EventBus.Subscribe<StandardEvents.ClearGestureBufferEvent>(ClearGesture);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void EnqueueGesture(StandardEvents.AddGestureBufferEvent e)
    {
        if (e.username != GameController.username[playerID])
            return;

        GameObject newGestureIcon = null;
        if (e.gesture == "Thumb_Up")
        {
            newGestureIcon = Instantiate(gesturePrefabs[0], (Vector2)transform.position + new Vector2(-0.5f, 0f), Quaternion.identity);

        }
        else if (e.gesture == "ILoveYou")
        {
            newGestureIcon = Instantiate(gesturePrefabs[1], (Vector2)transform.position + new Vector2(-0.5f, 0f), Quaternion.identity);
        }
        else if (e.gesture == "Closed_Fist")
        {
            newGestureIcon = Instantiate(gesturePrefabs[2], (Vector2)transform.position + new Vector2(-0.5f, 0f), Quaternion.identity);
        }
        else if (e.gesture == "Open_Palm")
        {
            newGestureIcon = Instantiate(gesturePrefabs[3], (Vector2)transform.position + new Vector2(-0.5f, 0f), Quaternion.identity);
        }
        else if (e.gesture == "Victory")
        {
            newGestureIcon = Instantiate(gesturePrefabs[4], (Vector2)transform.position + new Vector2(-0.5f, 0f), Quaternion.identity);
        }


        if (newGestureIcon != null)
            {
                if (existingGestures.Count > 0)
                {
                    foreach (GameObject g in existingGestures)
                    {
                        g.transform.position += new Vector3(1f, 0f);
                    }
                }
                if (existingGestures.Count >= 2)
                {
                    GameObject tmp = existingGestures[0];
                    existingGestures.Remove(existingGestures[0]);
                    Destroy(tmp);
                }
                existingGestures.Add(newGestureIcon);
            }
    }

    void ClearGesture(StandardEvents.ClearGestureBufferEvent e)
    {
        if (e.username != GameController.username[playerID])
            return;

        while (existingGestures.Count > 0)
        {
            GameObject tmp = existingGestures[0];
            existingGestures.Remove(existingGestures[0]);
            Destroy(tmp);
        }

    }
}
