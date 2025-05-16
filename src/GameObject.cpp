#include "GameObject.h"

GameObject::GameObject(){
    sprite = LoadTexture("asset/spaceShips_003.png");
    this->position = {100,100};
    this->direction = {0,0};
    this->angle = 0;
     this->speed = 0;
}

void GameObject::Draw(){
DrawTextureEx(sprite, position, angle, 0.3, {255,255,255,255});
}

void GameObject::Update(float dt){
if(IsKeyDown(KEY_A)){
    angle -= 10.0 * dt;
}
if(IsKeyDown(KEY_D)){
    angle += 10.0 * dt;
}

if(angle < 0 )
    angle = 360 - angle;
    
if(angle > 360)
    angle = angle -360;
}