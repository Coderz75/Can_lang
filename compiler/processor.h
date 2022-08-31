#ifndef PROCESSOR_H
#define PROCESSOR_H

#include "slackerz/default.h"
#include <fstream>
using namespace std;
using namespace slackerz;
#include "error.h"

std::vector<std::string> dataof(string x){
  std::vector<std::string> result;
  str sline(x);
  // dlete all tabs and spaces at the start
  for(int i = 0; i< len(x); i++){
    if(sline.startswith("/t")){
      sline.v.erase(0,2);
    }else if(sline.startswith(" ")){
      sline.v.erase(0,1);
    }
  }
  string line = sline;
  result.push_back(line);// add pure line (no tabs and spaces at the start)

  //check type
  if(sline.startswith("import")){
    result.push_back("import");
    //now collecting number of args
    vector <string> args = sline.split(" ");
    result.push_back(to_string(args.size()));
    //now appending all args
    result.insert(std::end(result), std::begin(args), std::end(args));
  }else if(sline.startswith("//")){
    result.push_back("Comment");
  }else if(line == ""){
    result.push_back("Empty");
  }else result.push_back("unknown");
  return result;
}
#endif