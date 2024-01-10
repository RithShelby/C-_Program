#include <iostream>
using namespace std;
int main(){
    int i,n;
    float score;
    cout<<"Input N     :  ";cin>>n;
    for(i=0;i<n;i++){
    cout<<"Input Score :  ";cin>>score;
    if(score>=95){
        cout<<"You Got A\n";
    }if(score>85==score<90){
        cout<<"You Got B\n";
    }if(score>75==score<85){
        cout<<"You Got C\n";
    }if(score>55==score<75){
        cout<<"You Got D\n";
    }else if(score<=45){
        cout<<"You False";
    }
    }
    
}