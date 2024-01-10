#include<iostream>
#include"Product.h"
class Sale :public Product{
    protected:
    float price;
    public:
    float Discout(){
        if(cost >=5 && cost <=10){
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
    Sale(){
        Product:Product();
    }
    Sale(int i,int q,float c , string n,float p){
        Product:Product();
        price = p;
    }
    void setID(int ID){
        id = ID;
    }
    int getID(){
        return id;
    }
    void setQTY(int QTY){
        qty = QTY;
    }
    int getQTY(){
        return qty;
    }
    void setName(string Name){
        name = Name;
    }
    string getName(){
        return name;
    }
    void setCost(float Cost){
        cost = Cost;
    }
    int getCost(){
        return cost;
    }
    void setPrice(float Price){
        price = Price;
    }
    int getPrice(){
        return price;
    }
    // function member 
    void Input(){
    Product::Input();
    cout<<"Input Price to Selling : ";cin>>price;
    }
    float Profit(){
        return price - cost ;
    }
    void Output(){
        Product::Output();
        cout<<"Price\tProfit"<<endl;
        cout<<price<<"$"<<"\t"<<Profit()<<"$"<<endl;
    }
};