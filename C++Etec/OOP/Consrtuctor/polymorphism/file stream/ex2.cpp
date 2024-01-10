#include<iostream>
#include<fstream>
using namespace std;
// Read
int main(){
    ifstream file;
    file.open("Read.txt",ios::in);
    char name[20];
    file>>name;
    cout<<"\tName : "<<name;
    file.close();
}