#pragma once

#include "Shape.h"

class Rect final : public Shape {
    public:
    Rect(float x=0, float y=0,float w=0,float h=0,Color* col = nullptr);
    void Draw();
};