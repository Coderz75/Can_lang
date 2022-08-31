#ifndef ERROR_H
#define ERROR_H

#include "processor.h"
#include "checks.h"
#include "errorHandle.h"


void checkError(vector<string> file){
    for(int i = 0; i <= file.size();i++){
        //collect data
        string line = file[i];
        str sline(line);
        vector<string> data = dataof(line);
        string type = data[1];
        //check if it isn't nonsense :)
        if(type == "unknown"){
            cerror(i+1,"Sorry, but we find this line complete nonsense -_-",sline.v,"How about make sure it isn't complete nonsense? \n\tIf it actually is something, check the syntax");
        }
        checks c;
        //check
        if(type == "import") c.import(data,i);

    }
}
#endif