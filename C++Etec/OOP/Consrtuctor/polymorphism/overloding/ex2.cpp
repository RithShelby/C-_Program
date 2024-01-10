#include<iostream>
using namespace std;
class Person{
    private:
        int x,y;
    public:
    /*------------[Overloading Constructor]----------*/
    Person(){
        x=10;y=10;
    }
    Person(int a){
        x=a;
    }
    Person(int a , int b){
        x=a;
        y=b;
    }
    /*------------[Overloading Method]--------------*/
    void Output(){
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
    void Output(int x){
        cout<<"x = "<<x<<endl;
    }
    void Output(int x , int y){
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
    /*------------[Overloading Operator]------------*/
    void operator ++(){
        x+=5;y+=5;
    }
    void operator --(){
        x-=5,y-=5;
    }
};
int main(){
    Person obj;
    ++obj;
    obj.Output();
}