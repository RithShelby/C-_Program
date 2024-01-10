#include<iostream>
#include<iomanip>
using namespace std;
class Product{
    protected:
    int id,qty;
    string name;
    public:
    Product(){
    }
    Product(int i,string n,int q){
      id=i;
      name=n;
      qty=q;
    }
    void Input(){
        cout<<"Input Id: "; cin>>id;
        cout<<"Input Name: "; cin>>name;
        cout<<"input QTY: "; cin>>qty;
    }
    void Output(){
        cout<<"ID\tName\tQTy";
        cout<<id<<"\t"<<name<<"\t"<<qty;
    }
};
class Sale: public Product{
    protected:
      float price;
      public:
      Sale(){
        Product:Product();
        price=0;
      }
      Sale(int i,string n,int q,float p){
        id=i;
        name=n;
        qty=q;
        price=p;
      }
      void Input(){
        Product::Input();
        cout<<"Input Price: "; cin>>price;
      }
      void Output(){
        Product::Output();
        cout<<"Price";
        cout<<price;
      }
};
class Promo: public Sale{
    private:
    float disc,payment;
    public:
    Promo(){
        Sale:Sale();
        disc=0;
        payment=0;
    }
    Promo(int i,string n,int q,float p,float d,float pa){
        id=i;
        name=n;
        qty=q;
        price=p;
        disc=d;
        payment=pa;
      }
    float Discout(){
        if(price >=5 && price <=10){
            return  50; // discout 50% if cost <= 10$
        }else{ // discout 70% if cost up 10$ +
            return 70;
        }
    }
    int Payment(){
        if(price >= 5 && price <=10){
            return (price*50)/100;
        }else{
            return (price*30)/100;
        }
    }
    void output(){
        Sale::Output();
        cout<<"Discount\tPayment"<<endl;
        cout<<Discout()<<"%"<<"\t\t"<<Payment()<<"$"<<endl;
    }
};
int main(){
    Promo pro[20];
    int i,n;
    cout<<"Input n : ";cin>>n;
    for(i=0;i<n;i++){
        pro[i].Input();
    }
    for(i=0;i<n;i++){
        pro[i].Output();
    }
}
