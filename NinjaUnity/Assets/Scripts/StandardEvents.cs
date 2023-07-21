using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace StandardEvents
{
    public class GameStartEvent
    {
        public string username0;
        public string username1;

        public GameStartEvent(string username0, string username1)
        {
            this.username0 = username0;
            this.username1 = username1;
        }
    }

    public class AddGestureBufferEvent
    {
        public string username;
        public string gesture;

        public AddGestureBufferEvent(string username, string gesture)
        {
            this.username = username;
            this.gesture = gesture;
        }
    }

    public class ReleaseSkillEvent
    {
        public string username;
        public string skill;

        public ReleaseSkillEvent(string username, string skill)
        {
            this.username = username;
            this.skill = skill;
        }
    }

    public class ClearGestureBufferEvent
    {
        public string username;

        public ClearGestureBufferEvent(string username)
        {
            this.username = username;
        }
    }

    public class ChangeHPEvent
    {
        public string username;
        public int value;

        public ChangeHPEvent(string username, int value)
        {
            this.username = username;
            this.value = value;
        }
    }


}
