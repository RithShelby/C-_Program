#include<iostream>
using namespace std;
template <typename T>
void Swap(T *x,T *y){
    T temp;
    temp = *x;
    *x   = *y;
    *y   = temp;
}
int main(){
    int x1 = 10 ,y1 = 20;
    Swap(&x1,&y1);
    cout<<"x1 = "<<x1<<"\t\ty1 = "<<y1<<endl;

    long x2 = 30 ,y2 = 40;
    Swap(&x2,&y2);
    cout<<"x2 = "<<x2<<"\t\ty2 = "<<y2<<endl;

    float x3 = 4.5 ,y3 = 3.6;
    Swap(&x3,&y3);
    cout<<"x3 = "<<x3<<"\ty3 = "<<y3<<endl;

    double x4 = 10.5 ,y4 = 45.7;
    Swap(&x4,&y4);
    cout<<"x4 = "<<x4<<"\ty4 = "<<y4<<endl;

    string x5 = "John",y5 = "Rith";
    Swap(&x5,&y5);
    cout<<"x5 = "<<x5<<"\ty5 = "<<y5<<endl;

}