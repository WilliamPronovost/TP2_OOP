#pragma once 

#include "GameObject.h"
#include "laser.h"
class Asteroid:public GameObject{
    public:
        Asteroid();
        float ast_speed;
        float ast1_x, ast1_y, ast1_w, ast1_h;
        float* x,y, dt;
        bool ast_to_hit = false;
        int ast_dir;
};