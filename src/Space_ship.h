#pragma once 

#include "GameObject.h"

class Space_ship:public GameObject{
    public:
        Space_ship();
        Color ship_col = RED;
        float ship_points[6] = {100,100,150,150,50,150};
        int heart_num;
        bool isHit;
};