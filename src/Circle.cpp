#include "Circle.h"

#include "raylib.h"

Circle::Circle(float x, float y,float radius,Color* col) : Shape(x,y,radius,radius,col) {

}

void Circle::Draw(){
    DrawCircle(this->m_dimensions[0],this->m_dimensions[1],this->m_dimensions[2],*this->m_col);
}