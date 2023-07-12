using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace StandardEvents
{
    public class GestureFromAndroidEvent
    {
        public string message;

        public GestureFromAndroidEvent(string message)
        {
            this.message = message;
        }
    }

    public class HPFromAndroidEvent
    {
        public float player_0_HP;
        public float player_1_HP;

        public HPFromAndroidEvent(float player_0_HP, float player_1_HP)
        {
            this.player_0_HP = player_0_HP;
            this.player_1_HP = player_1_HP;
        }
    }


}
