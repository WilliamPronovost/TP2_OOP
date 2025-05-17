#include "Space_ship.h"

Space_ship::Space_ship():GameObject(){
    if(is_hit){
        heart_num--;
        is_hit = true;
        if(heart_num == 0){
            CloseWindow();
        }
    }
}