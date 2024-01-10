/*Rock vs Scissor -> Rock wins
Rock vs Paper -> Paper wins
Paper vs Scissor -> Scissor wins*/
#include<iostream>
using namespace std;
int main(){
    char r,s,p;
    string result;
    string p1,p2;
    cout<<"Player one : ";cin>>r,s,p;
    cout<<"Player Two : ";cin>>r,s,p;
    if(p1==r && p2==s){
        result = r;
    }
    cout<<"Result : "<<r;
}