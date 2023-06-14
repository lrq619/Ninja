# Ninja
Ninja game for VE441
## Getting Started
third-party library we'll use:
Frontend:
* Unity3D
* mediapipe

Backend:
* Django

## Story Map
![](assets/story_map.png)
![](assets/engine.png)
Ninja will capture both players' voices and gestures, using the microphones and camera on smart devices. The captured Audio/Video frames will be sent to the backend server implemented by Django. The backend server will then run Deepe Nerual Network to make inference on the transmitted Audio/Video frames. The results of the inferences will be sent back to the game content in order to make updates.

## APIs and Controller
```
fun TransmitAudioFrame(AudioFrame* aFrames, BackendServer* server); // API used to transmit the audio frames to the backend server

fun TransmitVideoFrame(VideoFrame* vFrames, BackendServer* server); // API used to transmit the video frames to the backedn server

fun GetUpdatesFromServer(Updates* updates, BackendServer* server); // API used to accept update from backend server

fun applyUpdates(Updates* updates, View* view); // API used to apply updates to the game views
```

## View UI/UX

## Team Roster:
Lai Ruiqi
Zhang Lechen
Yi Shanglin
Li Zekai
Chen Yifan
Chen Xuzhong