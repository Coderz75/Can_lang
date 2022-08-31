#ifndef ERRORHANDLE_H
#define ERRORHANDLE_H

#include "color/termcolor.hpp"
#include "slackerz/default.h"

void cerror(int line, string error, string faultline,string tips = ""){
    std::cout << termcolor::red << "ERROR: On line: " + to_string(line) + "\n\n"<<termcolor::underline << faultline<<termcolor::reset<<termcolor::red<<"\n\n"<<error << termcolor::green<<"\n\nTips:\n\t" << tips << termcolor::red<< "\nCompilation Terminated";
    cout<< termcolor::reset;
    exit(EXIT_FAILURE);
}

void cerror(string error){
    std::cout << termcolor::red << error << "\nCompilation Terminated";
    cout << termcolor::reset;
    exit(EXIT_FAILURE);
}
#endif