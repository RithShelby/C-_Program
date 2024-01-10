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
    void setData(int ID,string Name){
        id = ID;
        name = Name;
    }
    void Input(){
        cout<<"Input ID :";cin>>id;
        cout<<"Input Name : ";cin>>name;
    }
};
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
     void setData(int Line,string Des){
        line = Line;
        destination = Des;
    }
    void Input(){
        cout<<"Input Line : ";cin>>line;
        cout<<"Input Destination : ";cin>>destination;
    }
};
class CityBus : public Bus,Route{
    public:
    void Input(){
        Bus::Input();
        Route::Input();
    }
    void Output(){
        cout<<"ID\tName\tLine\tDestination"<<endl;
        cout<<id<<"\t"<<name<<"\t"<<line<<"\t"<<destination<<endl;
    }
};
int main(){
    int i,n;
    CityBus cb[10];
    cout<<"Input N : ";cin>>n;
    for(i=0;i<n;i++){
         cb[i].Input();
    }
    for(i=0;i<n;i++){
         cb[i].Output();
    }

}