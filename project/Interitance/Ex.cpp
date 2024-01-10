#include<iostream>
#include<iomanip>
using namespace std;
/*Super Class*/
class A{
    protected:
        int x;
    public:
    /*Default Construtor*/
    A(){
        x = 0;
    }
    /*Constructor has parameter*/
    A(int x){
        this ->x = x;
    }
    /* Method*/
    void Input(){
        cout<<"Input X : ";cin>>x;
    }
    void Output(){
        cout<<setw(10)<<x;
    }
};
/* Sub Class*/
class B : private A{
    private :
        int y;
    public:
    /*Default Construtor*/
    B(){
    A:A();
        y = 0;
    }
    /*Construtor has parameter*/
    B(int x , int y){
        this ->x = x;
        this ->y = y;
    }
    /* Method */
    void Input(){
    A::Input();
    cout<<"Input Y = ";cin>>y;
    }
    void Output(){
    A::Output();
    cout<<setw(10)<<y<<endl;
    }
};
int main(){
    B obj;
    obj.Input();
    obj.Output();
}