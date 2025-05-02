#pragma once

struct Color; // Forward declare

class Shape {
    protected:
    float m_dimensions[6];
    Color* m_col;
    public:
    Shape(float x=0,float y=0, float w=100, float h=100, Color* col = nullptr);
    virtual void Draw() = 0;
};