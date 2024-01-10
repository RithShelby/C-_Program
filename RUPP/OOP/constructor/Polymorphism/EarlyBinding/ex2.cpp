#include<iostream>
using namespace std;
class Sqaure{
    protected:
    int len;
    public:
    void Input(){
        cout<<"Input Length of Sqaure :";cin>>len;
    }
    void Output(){
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
    Sqaure *ptr;
    Sqaure s;
    Rectangle r;
    ptr = &s;
    ptr = &r;
    ptr->Input();
    ptr->Output();
}
