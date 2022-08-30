#include <iostream>
#include "processor.h"
#include <fstream>
#include "error.h"

int main(int argc, char** argv){
  if(argc > 1){
    cerror("Too many arguments has been passed into compiler \nTips: \n\tWe only accept one argument, which is the file to be compiled\n\tIf yur file name contains spaces, remove them");
  }
  if(argc == 0){
    cerror("No arguments passed into compiler \nTip: append the command with the file you wish to compile");
  }
  print(dataof("import hello.me"));
  print(dataof("import func.cpp cpp"));
}