#pragma once 
#include "raylib.h"

class GameObject{
    protected:
        Texture2D sprite;
        Vector2 position;
        Vector2 direction;
        float angle;
        float speed;
    public:
        GameObject();
        void Draw();
        void Update(float dt);
};