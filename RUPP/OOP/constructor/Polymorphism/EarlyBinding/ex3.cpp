#include<iostream>
using namespace std;
class Sum{
    protected:
    int a,b;
    public:
    void Input(){
        cout<<"Input A : ";cin>>a;
        cout<<"Input B : ";cin>>b;
    }
    void Output(){
        cout<<"A :"<<a<<endl;
        cout<<"B :"<<b<<endl;
        cout<<"Sum :"<<sum();
    }
    int sum(){
        return a+b;
    }

    
};
class Sum1 :public Sum{
    protected:
    int a,c;
    public:
     void Input(){
        cout<<"Input A : ";cin>>a;
        cout<<"Input C : ";cin>>c;
    }
    void Output(){
        cout<<"A :"<<a<<endl;
        cout<<"C :"<<c<<endl;
        cout<<"Sum : "<<sum();
    }
    int sum(){
        return a+c;
    }
};
int main(){
    Sum *ptr;
    Sum s;
    Sum1 s1;
    ptr = &s;
    ptr = &s1;
    ptr->Input();
    ptr->Output();
}