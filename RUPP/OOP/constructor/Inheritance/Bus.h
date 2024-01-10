#include<iostream>
using namespace std;
class Bus{
    protected:
    int id;
    string name;
    public:
    int getID(){
        return id;
    }
    string getName(){
        return name;
    }
    void setID(int ID){
        id = ID;
    }
    void setName(string Name){
        name = Name; 
    }
    Bus(){

    }
    Bus(int ID,string Name){
        id = ID;
        name = Name;
    }
    void Input(){
        cout<<"Input ID :";cin>>id;
        cout<<"Input Name : ";cin>>name;
    }
};