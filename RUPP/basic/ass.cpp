#include<iostream>
using namespace std;
int main(){
    int id,age;
    char name[20];
    float height;
    cout<<"Input ID  : ";cin>>id;
    cout<<"Input Age : ";cin>>age;
    cout<<"Input Name :";
    cin.seekg(0,ios::end);
    cin.clear();
    cin.getline(name,20);
    cout<<"Input Height : ";cin>>height;
    // output
    cout<<"ID"<<"\t"<<"Age"<<"\t"<<"Name"<<"\t\t"<<"Height"<<endl;
    cout<<id<<"\t"<<age<<"\t"<<name<<"\t"<<height<<endl;
}