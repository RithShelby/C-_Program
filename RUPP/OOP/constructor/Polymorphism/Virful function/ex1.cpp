#include<iostream>
using namespace std;
class Sqaure{
    protected:
    int len;
    public:
    virtual void Input(){
        cout<<"Input Length of Sqaure :";cin>>len;
    }
    virtual void Output(){
        cout<<"Length of Sqaure : "<<len<<endl;
        cout<<"Area :"<<area()<<endl;
    }
    int area(){
        return len*len;
    }
};
class Rectangle :public Sqaure{
    protected:
    int len2;
    public:
    void Input(){
        cout<<"Input Width of Rec : ";cin>>len;
        cout<<"Input Height of Rec : ";cin>>len2;
    }
    void Output(){
        cout<<"Width : "<<len<<endl;
        cout<<"Height : "<<len2<<endl;
        cout<<"Area :"<<area()<<endl;
    }
    int area(){
        return len*len2;
    }
};
int main(){
    Sqaure *ptr1 ,*ptr2;
    Sqaure s;
    Rectangle r;
    ptr1 = &s;
    ptr2 = &r;
    ptr1->Input();
    ptr1->Output();
    ptr2->Input();
    ptr2->Output();
}
