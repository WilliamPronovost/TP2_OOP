#include "entrypoint.h"
#include "raylib.h"
#include "assets.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include <vector>
#define MAX_COL 14
#define MAX_ROW 14
#define WIN_W MAX_COL * RECT_SIZE

//Creer votre class Engin ici et appeler une fonction start que vous définisser à la classe dans la fonction raylib_start plus bas.
void raylib_start(void){
    InitWindow(720,480,"Asteroids");
    Triangle* spaceShip; 
    Circle* asteroid;
    float* ship_dimensions[6];
    SetTargetFPS(30);
    float* ship_x, ship_y, ship_w, ship_h;
    std::vector<Shape*> shapes;
    Color rekt_col = RED;
    Color circ_col = BLUE;
    Color trig_col = MAGENTA;
    shapes.push_back(new Rect(0,0,100,100,&rekt_col));
    shapes.push_back(new Circle(200,200,50,&circ_col));
    float points[] = {100,100,150,150,50,150};
    shapes.push_back(new Triangle(points,&trig_col));

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        DrawTriangle(CLITERAL(Vector2){spaceShip->ship_points[0],spaceShip->ship_points[1]},CLITERAL(Vector2){spaceShip->ship_points[2],spaceShip->ship_points[3]},CLITERAL(Vector2){spaceShip->ship_points[4],spaceShip->ship_points[5]},*spaceShip->ship_color);
        EndDrawing();
    }

    CloseWindow();
}