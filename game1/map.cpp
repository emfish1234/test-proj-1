#include <iostream>

#include "lib/map.h"

VisMap::VisMap(){
    for (int i = 0; i < WORLD_MAP_HEIGHT; i++){
        for (int j = 0; j < WORLD_MAP_LENGTH; j++){
            tile[i][j].Char = MAP_INIT[i][j];
            tile[i][j].visible = false;
            tile[i][j].safe = false;
        }
    }
}

void VisMap::updateVis(int x, int y){
    
}
    
void printMap(){
    char tile [1];
    for (int i = 0; i < WORLD_MAP_HEIGHT; i++){
        for (int j = 0; j < WORLD_MAP_LENGTH; j++){
            tile[0] = MAP_INIT[i][j];
            if ((i==0)||(j==0)||(i==WORLD_MAP_HEIGHT-1)||(j==WORLD_MAP_LENGTH-1)){
                printColor(std::string(tile),WHITE,NONE);
            }
            else {
                switch (tile[0]){
                    case '^': printColor(tile, LGRAY, NONE); break;
                    case '.': printColor(tile, LGREEN, NONE); break;
                    case '&': printColor(tile, GREEN, NONE); break;
                    case '~': printColor(tile, LBLUE, NONE); break;
                    default: printColor(tile,NONE,NONE); break;
                }
            }
        }
        std::cout << std::endl;
    }
    //printColor("hello", BLUE, NONE);
    return;
}