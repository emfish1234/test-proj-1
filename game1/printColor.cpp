#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include "lib/printColor.h"


void printColor(std::string str, Color fClr, Color bClr){
    char num_s[3];
    std::string s = "\033[";
    std::ostringstream ss;

    if (!fClr && ! bClr) s += "0"; // reset colors if no params

    if (fClr) {
        ss << (29+fClr);
        s += ss.str();

        if (bClr) s += ";";
    }

    if (bClr) {
        ss << (39 + bClr);
        s += ss.str();
    }

    s += "m";
    s += str;
    std::cout << s;
    
}
