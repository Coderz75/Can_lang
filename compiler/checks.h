#include "errorHandle.h"
#include "global.h"

class checks{
    public:
        checks(){}
        void import(vector<string> data,int line){
            int args = toint(data[2]);
            if(toint(data[2]) == 1) cerror(line,"No arguments to import",data[0],"I can't figure out what to import, :/");
            if(toint(data[2]) >2) cerror(line,"To many arguments",data[0],"If your file has spaces in them, remove the spaces and try again");
            warn(line,"Imports not supported yet. you gotta wait a while");
        }
};