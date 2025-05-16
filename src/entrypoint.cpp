#include "entrypoint.h"
#include "raylib.h"
#include "assets.h"
#include "Space_ship.h"
#include "GameObject.h"
#include "asteroid.h"
#include "laser.h"

#include <vector>
#define MAX_COL 14
#define MAX_ROW 14
//Creer votre class Engin ici et appeler une fonction start que vous définisser à la classe dans la fonction raylib_start plus bas.
void raylib_start(void){
    InitWindow(720,480,"Asteroids");
    SetTargetFPS(30);
    SetTargetFPS(30);
    float* ship_x, ship_y, ship_w, ship_h;
    std::vector<GameObject*> game_objects;
    Color ast_col = BLUE;
    Color laser_col = MAGENTA;
    float points[] = {100,100,150,150,50,150};
    while(!WindowShouldClose()){
        float dt = GetFrameTime();
        Space_ship* spaceShip = new Space_ship();
        spaceShip->Update(dt);
        Asteroid* asteroid = new Asteroid();
        Laser* laser = new Laser();
        BeginDrawing();
        ClearBackground(BLACK);
        spaceShip->Draw();
        DrawTriangle(CLITERAL(Vector2){spaceShip->ship_points[0],spaceShip->ship_points[1]},CLITERAL(Vector2){spaceShip->ship_points[2],spaceShip->ship_points[3]},CLITERAL(Vector2){spaceShip->ship_points[4],spaceShip->ship_points[5]},spaceShip->ship_col);
        delete spaceShip;
        delete asteroid;
        delete laser;
        EndDrawing();
    }
}