#pragma once

#include "Shape.h"

class Circle final : public Shape {
    public:
    Circle(float x, float y,float radius,Color* col);
    void Draw();
};