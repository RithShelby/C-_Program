#include<iostream>
using namespace std;
template <typename T>
void Swap(T *x,T *y){
    T temp;
    temp = *x;
    *x = *y;
    *y=temp;
}
int main(){
    int x1=10,y1=12;
    long x2=123,y2=45;
    float x3=23.5,y3=67.5;
    double x4=1234.56,y4=678.6;
    string st1 = "Etec",st2 = "Center";
    Swap(&x1,&y1);
    cout<<"Interger X1 = "<<x1<<"   Y1 = "<<y1<<endl;
    Swap(&x2,&y2);
    cout<<"Long     X2 = "<<x2<<"   Y2 = "<<y2<<endl;
    Swap(&x3,&y3);
    cout<<"Floating X3 = "<<x3<<"   Y3 = "<<y3<<endl;
    Swap(&x4,&y4);
    cout<<"Double   X4 = "<<x4<<"   Y4 = "<<y4<<endl;
    Swap(&st1,&st2);
    cout<<"String   s1 = "<<st1<<"  s2= "<<st2<<endl;
}