#ifndef _PRINT_COLOR_
#define _PRINT_COLOR_

#include <iostream>

enum Color {
    NONE=0, BLACK, RED, GREEN,
    YELLOW, BLUE, MAGENTA, CYAN,
    LGRAY, GRAY = 61, LRED = 62, LGREEN = 63,
    LYELLOW = 64, LBLUE = 65, LMAGENTA = 66,
    LCYAN = 67, WHITE = 68 
};

void printColor(std::string str, Color forground, Color background);

#endif