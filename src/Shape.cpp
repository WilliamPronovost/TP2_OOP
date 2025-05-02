#include "Shape.h"

#include "raylib.h"

Shape::Shape(float x,float y, float w, float h,Color* col) : m_dimensions {x,y,w,h} {
    this->m_col = col == nullptr ? new Color(PINK) : col;
}
// void Shape::Draw(){
//     DrawRectangle(this->m_x,this->m_y,this->m_w,this->m_h,*this->m_col);
// }