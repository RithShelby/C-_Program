#include<iostream>
#include<fstream>
using namespace std;
// write
int main(){
    ofstream file;
    file.open("Read.txt",ios::out);
    char name[20];
    cout<<"Input Name : ";cin>>name;
    file<<name;
    file.close();
}
