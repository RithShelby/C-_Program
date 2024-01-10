#include<iostream>
#include"Promot.h"
using namespace std;
int main(){
    Promot pro[20];
    int i,n;
    cout<<"Input n : ";cin>>n;
    for(i=0;i<n;i++){
        pro[i].Input();
    }
    for(i=0;i<n;i++){
        pro[i].Output();
    }
}