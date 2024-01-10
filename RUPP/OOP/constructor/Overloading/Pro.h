#include<iostream>
using namespace std;
class Pro{
    protected:
    int id,qty;
    float dis,price;
    string name;
    public:
    Pro(){

    }
    Pro(int ID,string Name,float Qty,float Price){
        id = ID;
        name =Name;
        qty = Qty;
        price = Price;
        dis = 0;
    }
    Pro(int i,string n,int q,float p,float d){
        id = i;
        name = n;
        qty = q;
        price = p;
        dis = d;
    }
    float amout(){
        return qty*price;
    }
    float discount(){
        return amout()*dis/100;
    }
    float payment(){
        return amout()-discount();
    }
    void Output(){
        cout<<id<<"\t"<<name<<"\t"<<qty<<"\t"<<price<<"\t"<<amout()<<endl;
    }
};
