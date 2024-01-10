#include<iostream>
using namespace std;
/*syntax of template*/
template <typename T>
T Sum(T x,T y){
    return x*y;
}
int main(){
    cout<<"Sum : "<<Sum(5,2)<<endl;
    cout<<"Sum : "<<Sum(2.5f,3.5f)<<endl;
}