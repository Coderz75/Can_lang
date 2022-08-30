#ifndef ERROR_H
#define ERROR_H

#include "color/termcolor.hpp"

void cerror(string error){
    std::cout << termcolor::red << error;
    cout<< termcolor::reset;
    exit()
}
#endif