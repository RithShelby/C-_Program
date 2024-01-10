#include<iostream>
using namespace std;
class Product{
    protected:
    int id,qty;
    string name;
    float cost;
    public:
    Product(){

    }
    Product(int ID,int QTY,string Name,float Cost){
        id = ID;
        qty = QTY;
        name = Name;
        cost = Cost;
    }
    void Input(){
        cout<<"Input ID : ";cin>>id;
        cout<<"Input QTY : ";cin>>qty;
        cout<<"Input Name : ";cin>>name;
        cout<<"Input Cost : ";cin>>cost;
    }
    void Output(){
        cout<<"ID\tQTY\tName\tCost\t"<<endl;
        cout<<id<<"\t"<<qty<<"\t"<<name<<"\t"<<cost<<"$"<<endl;
    }
};