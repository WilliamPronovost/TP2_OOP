#pragma once 

#include "GameObject.h"

class Laser:public GameObject{
    public:
        Laser();
        float las_x = 100, las_y = 100, las_w = 100, las_h = 100;
        bool hit_ast = true;
        float las_speed;
        int las_dir;
};