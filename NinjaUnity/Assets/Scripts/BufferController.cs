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

        GameObject newGesturePrefab = null;
        if (e.gesture == "Thumb_Up")
            newGesturePrefab = gesturePrefabs[0];
        else if (e.gesture == "ILoveYou")
            newGesturePrefab = gesturePrefabs[1];
        else if (e.gesture == "Closed_Fist")
            newGesturePrefab = gesturePrefabs[2];
        else if (e.gesture == "Open_Palm")
            newGesturePrefab = gesturePrefabs[3];
        else if (e.gesture == "Victory")
            newGesturePrefab = gesturePrefabs[4];

        if (newGesturePrefab != null)
        {
            StartCoroutine(_EnqueueGesture(newGesturePrefab));
        }
    }

    IEnumerator _EnqueueGesture(GameObject newGesturePrefab)
    {
        for (float i = 0; i <= 1f; i += 0.1f)
        {
            foreach (GameObject g in existingGestures)
                g.transform.position += new Vector3(0.1f, 0f);
            yield return new WaitForSeconds(0.02f);
        }

        GameObject newGestureIcon = Instantiate(newGesturePrefab, (Vector2)transform.position + new Vector2(-0.5f, 0f), Quaternion.identity);

        if (existingGestures.Count >= 2)
        {
            GameObject tmp = existingGestures[0];
            existingGestures.Remove(existingGestures[0]);
            Destroy(tmp);
        }

        existingGestures.Add(newGestureIcon);

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
