#include <iostream>
#include <string>
using namespace std;
int main(){
int a,b,x,i,n;
int result;
cout<<"=============Calculator In C++=========="<<endl;
cout<<"Input N to use calculator : ";cin>>n;
for(i=0;i<n;i++){
cout<<"Input First number  : ";cin>>a;
cout<<"Input Operator      : ";cin>>x;
cout<<"Input Second Number : ";cin>>b;
    if(x == 1){
        result = a + b;
    }else if(x == 2){
        result = a - b;
    }else if(x == 3){
        result = a * b;
    }else{
        result = a / b;
    }
    cout<<"Result : "<<result<<endl;
        }
}