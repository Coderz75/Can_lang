#include <iostream>
#include <fstream>
#include "error.h"
#include "global.h"

vector<string> file;
vector<string> apis = {"api","files"};

void Verifyinputs(int argc){
  if(argc > 2){
    cerror("Too many arguments has been passed into compiler \nTips: \n\t We only accept one argument, which is the file to be compiled\n\t2If yur file name contains spaces, remove them");
  }
  if(argc == 1){
    cerror("No arguments passed into compiler \nTip: append the command with the file you wish to compile");
  }
}


int process(){
  //and another function : )
  checkError(file);
  return 0;
}

int main(int argc, char** argv){
  //verify inputs were given
  Verifyinputs(argc);
  //read from file
  string* line;
  line = new string;
  //make sure file exists
  ifstream f(argv[1]);
  if (f)
  {
    while ( getline (f,*line) )
    {
      file.push_back(*line);
    }
    f.close();
  }else cerror("Unable to open file \nTips: \n\tMake sure the file exists \n\tMake sure you have enough memory");
  delete line;
  //Done reading, now time to process
  //With a function lol
  process();
}