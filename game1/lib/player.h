#ifndef _PLAYER_
#define _PLAYER_

#include "utilities.h"

class Player {
	int _x;
	int _y;  
	char _symbol;
	Color _color;
public:
	Player(char symbol, int row_0, int col_0);	
	int col();
	int row();
	char symbol();
	void move(int,int);
};

#endif