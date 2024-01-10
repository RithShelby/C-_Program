#include<iostream>
using namespace std;
template <typename T>
T sum(T x,T y){
    return x+y;
}
int main(){
    int x1=10,y1=12;
    long x2=123,y2=45;
    float x3=23.5,y3=67.5;
    double x4=1234.56,y4=678.6;
    cout<<"sum int = "<<sum(x1,y1)<<endl;
    cout<<"sum long = "<<sum(x2,y2)<<endl;
    cout<<"sum float = "<<sum(x3,y3)<<endl;
    cout<<"sum double = "<<sum(x4,y4)<<endl;
}