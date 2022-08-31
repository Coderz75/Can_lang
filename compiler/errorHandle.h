#ifndef ERRORHANDLE_H
#define ERRORHANDLE_H

#include "color/termcolor.hpp"
#include "slackerz/default.h"

void cerror(int line, string error, string faultline,string tips = ""){
    std::cout << termcolor::red << "ERROR: On line: " + to_string(line) + "\n\n" << faultline<<"\n\nThe error follows: \n"<<error << termcolor::green<<"\nTips:\n\t" << tips << termcolor::red<< "\nCompilation Terminated";
    cout<< termcolor::reset;
    exit(EXIT_FAILURE);
}

void cerror(string error){
    std::cout << termcolor::red << error << "\nCompilation Terminated";
    cout << termcolor::reset;
    exit(EXIT_FAILURE);
}
#endif