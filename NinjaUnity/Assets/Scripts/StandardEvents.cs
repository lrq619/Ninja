using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace StandardEvents
{
    public class GameStartEvent
    {
        public string username0;
        public string username1;
        public int player_id;
        public int room_id;

        public GameStartEvent(string username0, string username1, int player_id, int room_id)
        {
            this.username0 = username0;
            this.username1 = username1;
            this.player_id = player_id;
            this.room_id = room_id;
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

    public class InvokeMenuEvent
    {
        public string username;

        public InvokeMenuEvent(string username)
        {
            this.username = username;
        }
    }

    public class GameOverEvent
    {
        public string winner;
        public string loser;

        public GameOverEvent(string winner, string loser)
        {
            this.winner = winner;
            this.loser = loser;
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
