#ifndef _GAME_
#define _GAME_

#include <iostream>

//************************************/
// 
// 
//
//************************************/

/*********** DEFINITIONS *************/ 
#define WORLD_MAP_HEIGHT 42
#define WORLD_MAP_LENGTH 175

/*********** MAP ********************/
struct Tile {
    bool visible;
    bool safe;
    char Char;
};

class VisMap{
    public:
    VisMap();
    Tile tile [WORLD_MAP_HEIGHT][WORLD_MAP_LENGTH];
    Tile background [WORLD_MAP_HEIGHT][WORLD_MAP_LENGTH];
    void eraseTile(int,int);
    void updateVis(int,int);
    void updateSafe(int,int);
    void updateUnsafe();
    void printMap();
};


const char MAP_INIT [WORLD_MAP_HEIGHT][WORLD_MAP_LENGTH+1]  = {
"#############################################################################################################################^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"#..............................................................................................................................^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^...^^^^",
"#...................................................................................................................................^^^^^^^^^^^^^^^^^^.....^^^^^^............^^",
"#.................................................................................................................................^^^^.&&^^^^^^^^..............^^^^^^........^^",
"#.....................................................................................................................................&&&&^&&^^^^^^^^^^^..................^^^^^",
"#........................................................................................................................................&&&&&&&&^^^^^^&&&&&^^^^^^^^....^^^^^^^",
"#.........................................................................................................................................&&&&^^&&&&&^^^^^&&&&^^^^.....^^^.^^^^",
"#......................................................................................................................................&&&&........&&&&&&&&&^^^^.....^^^....^^^",
"#...................................................................................................................................&&&&&........&&&&&&&&^^^^^^^^......^^....^^",
"#.....................................................................................................................................&&&&..&&&&&&&^^^^^^^^^^^^^..............^",
"#................................................................................................................................................&&&&^^^^^^^^^^^^.............^",
"#......................................................................................................................................&&&&&&.......&~~~~^^^^^^^^^............^",
"#........................................................................................................................................&&&&^^^&&~~~~~~~^^^^^................^",
"#.......................................................................................................................................&&&&^^^^^^^&^~~~^^^^^^^^^^^...........^",
"#.........................................................................................................................................&&&&^^^&~~~~^^^^^^^^^...^^^.........^",
"#...........................................................................................................................................&&&~~~~~^^^^^^^^^^^...............^",
"#.......................................................................................................................................~~~~~~~~&^^^^^^^^^^^^^..........^^....^",
"#..................................................................................................................................~~~~~~~.&&&&^^&^^^^^^^^^^^^..........^^^...^",
"#..............................................................................................................................~~~~~........&&&^&&^^^^^^^^^^....^^.....^^^....^",
"#............................................................................................................................~~~~..........&&&&&&&^^^^^^^^^....^^^...........^^",
"#...........................................................................................................................~~...............&&&^&&^^^^^^^....^^^...........^^^",
"#...........................................................................................................................................^^&&&&^^^^^^^^....^^^^.........^^^^",
"#.........................................................................................................................................&&&&&&&^^^^^^^^^....^^^...........^^^",
"#............................................................................................................................................^&&^^.^^^^^^^^....^^............^^",
"#...........................................................................................................................................&&&&&&&^^^^^^.....................^",
"#........................................................................................................................................&&&&&&^&&&&^^^^^^....................^",
"#.........................................................................................................................................&&&&^^&&...^^^^....................^^",
"#...........................................................................................................................................&&&^^^...^^^^^^.^................^^",
"#................................................................................................................................................^...^^^^^^^^^.............^^^^",
"#..................................................................................................................................................^^..^^^..^............^^^^^^",
"#......................................................................................................................................................^^......^^..........^^^^",
"#..................................................................................................................................................................^........^^^",
"#....................................................................................................................................................^^^^^.....^^^^^^^^^.....^^",
"#......................................................................................................................................................^^^^.....^..^^^^......^^",
"#....................................................................................................................................................^^^^^^^......^^.........^^",
"#.............................................................................................................................................^...^^^..^^^^^^................^^",
"#..............................................................................................................................................^^.^..^^^^^^^^..............^^^^",
"#..................................................................................................................................................^^^^^^^^^^^^..........^^^^^^",
"#...........................................................................................................................................^^^^..^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"#.....................................................................................................................................^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
"###############################################################################################################################################################################"};



#endif