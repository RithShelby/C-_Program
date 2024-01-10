#include<iostream>
#include<string.h>
using namespace std;
class Person{
    private : 
    int id ,tel;
    char name[20],gender[10];
    string address;
    public:
    //constructor
    Person(){
        id = 0;
        tel = 0;
        address  = "Unknow";
        strcpy(name,"unknow");
        strcpy(gender,"unknow");
    }
    Person(int ID,char Name[20],char Gender[10],int Tel,string Address){
        id = ID;
        name[20] = Name[20];
        gender[10] = Gender[10];
        tel = Tel;
        address = Address;
    }
    
    int getID(){
        return id;
    }
    void setID(int ID){
        id = ID;
    }
    int getTel(){
        return tel;
    }
    void setTel(int Tel){
        tel = Tel;
    }
    char getName(){
        return name[20];
    }
    void setName(char Name){
        name[20] = Name;
    }
    char getGender(){
        return gender[10];
    }
    void setGender(char Gender){
        gender[10] = Gender;
    }
    string getAddress(){
        return address;
    }
    void setAddress(string Address){
        address = Address;
    }
        void Input(){
        cout<<"Input ID : ";cin>>id;
        cout<<"Input Name : ";cin.seekg(0,ios::end);cin.clear();cin.getline(name,20);
        cout<<"Input Gender : ";cin.seekg(0,ios::end);cin.clear();cin.getline(gender,20);
        cout<<"Input Phone Number : ";cin>>tel;
        cout<<"Input Address : ";cin>>address;
    }
    void Output(){
        cout<<"ID\tTel\tName\tGender\tAddress"<<endl;
        cout<<id<<"\t"<<tel<<"\t"<<name<<"\t"<<gender<<"\t"<<address<<endl;
    }
};
int main(){
    Person per(2,23232,"Huy sdksjd","MAlE","TK");
    Person per1(1,20202,"rith","male","pp");
    per1.Output();
    per.Output();
}