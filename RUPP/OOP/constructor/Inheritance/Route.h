#include "Bus.h"
#include<iostream>
class Route{
    protected:
    int line;
    string destination;
    public:
    int getLine(){
        return line;
    }
    string getDestination(){
        return destination;
    }
    void setLine(int Line){
        line = Line;
    }
    void setDestination(string Des){
        destination = Des;
    }
    Route(){

    }
    Route(int Line ,string Des){
        line = Line;
        destination = Des;
    }
    void Input(){
        cout<<"Input Line : ";cin>>line;
        cout<<"Input Destination : ";cin>>destination;
    }
};