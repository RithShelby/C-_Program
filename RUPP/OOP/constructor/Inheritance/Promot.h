#include<iostream>
#include"Sale.h"
class Promot : public Sale{
    public:
    float Discout(){
        if(cost >= 5 && cost <= 10){
            return  50; // discout 50% if cost <= 10$
        }else{ // discout 70% if cost up 10$ +
            return 70;
        }
    }
    int Payment(){
        if(cost >= 5 && cost <=10){
            return (cost*50)/100;
        }else{
            return (cost*30)/100;
        }
    }
    void Output(){
        Sale::Output();
        cout<<"Discount\tPayment"<<endl;
        cout<<Discout()<<"%"<<"\t\t"<<Payment()<<"$"<<endl;
    }
};