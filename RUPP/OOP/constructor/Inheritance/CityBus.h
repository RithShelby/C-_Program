#include"Bus.h"
#include"Route.h"
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