#include<iostream>
#include<ctime>
#include"test.h"
using namespace std;
int main(){
    // time_t now = time(0); // get the current date
    // cout<<"Number of Second since January 1 , 2021 is :"<<now <<endl;
    // tm* ltm = localtime(&now);
    // // printf various components of tm structure 
    // cout<<"Year : "<<1900 + ltm ->tm_year <<endl;
    // cout<<"Months : "<<1+ltm->tm_mon<<endl;
    // cout<<"Day : "<<ltm->tm_mday<<endl;
    // cout<<"Time : "<<ltm->tm_hour<<":";
    // cout<<ltm->tm_min<<":";
    // cout<<ltm->tm_sec<<endl;
    CurrentDateTime t;
    t.printDate();
}