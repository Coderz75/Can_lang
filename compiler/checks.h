#include "errorHandle.h"

class checks{
    public:
        checks(){}
        void import(vector<string> data,int num){
            if(toint(data[2]) == 1) cerror(num+1,"No arguments to import",data[0],"I can't figure out what to import, :/");
            if(toint(data[2]) >3) cerror(num+1,"To many arguments",data[0],"If your file has spaces in them, remove the spaces and try again");
            
        }
};