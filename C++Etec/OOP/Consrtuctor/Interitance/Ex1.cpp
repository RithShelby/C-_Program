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
class B {
    protected:
        int y;
    public:
    /*Default Construtor*/
    B(){
        y = 0;
    }
    /*Construtor has parameter*/
    B(int x , int y){
        this ->y = y;
    }
    /* Method */
    void Input(){
    cout<<"Input Y = ";cin>>y;
    }
    void Output(){
    cout<<setw(10)<<y;
    }
};
class C : public A ,public B{
    private :
        int z;
    public:
    /*Default Construtor*/
        C(){
            A:A();
            B:B();
            z = 0;
        }
    /* Constructor has parameter*/
    C(int x , int y , int z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    /* Method */
    void Input(){
        A::Input();
        B::Input();
        cout<<"Input Z : ";cin>>z;
    }
    void Output(){
        A::Output();
        B::Output();
        cout<<setw(10)<<z<<endl;
    }
};
int main(){
    C obj;
    obj.Input();
    obj.Output();
}