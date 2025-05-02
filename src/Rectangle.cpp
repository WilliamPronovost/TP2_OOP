#include "Rectangle.h"

#include "raylib.h"

Rect::Rect(float x, float y,float w,float h,Color* col) : Shape(x,y,w,h,col) {
    this->m_col = col;
}

void Rect::Draw(){
    DrawRectangle(this->m_dimensions[0],this->m_dimensions[1],this->m_dimensions[2],this->m_dimensions[3],*this->m_col);
}