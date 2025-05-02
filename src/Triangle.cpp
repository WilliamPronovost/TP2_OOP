#include "Triangle.h"
#include <string.h>
#include "raylib.h"


Triangle::Triangle(float points[6],Color* col){
    memcpy(m_dimensions,points,sizeof(points[0]) * 6);
    this->m_col = col;
}
void Triangle::Draw(){
    DrawTriangle(CLITERAL(Vector2){this->m_dimensions[0],this->m_dimensions[1]},CLITERAL(Vector2){this->m_dimensions[2],this->m_dimensions[3]},CLITERAL(Vector2){this->m_dimensions[4],this->m_dimensions[5]},*this->m_col);
}