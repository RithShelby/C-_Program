#include<iostream>
using namespace std;
class Person{
    float score;
    public:
    void Input(){
        cout<<"Input Score : ";cin>>score;
    }
    void Output(){
        cout<<"\t"<<score;
    }
};
int main(){
    Person per[10];
    int i,n;
    cout<<"Input N : ";cin>>n;
    for(i=0;i<n;i++){
        per[i].Input();
    }
    for(i=0;i<n;i++){
        per[i].Output();
    }
}