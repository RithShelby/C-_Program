#include<iostream>
using namespace std;
class Person{
    int id;
    string name,gender,address,phone;
    float salary;
    public:
    /* Default Constructor*/
    Person(){
        id       = 0;
        name     = "Unknow";
        gender   = "Unknow";
        address  = "Unknow";
        phone    = "Unknow";
        salary   = 0.0;
    }
    /*Constructor has parameter*/
    Person(int iD,string n,string g,string add,string ph,float sala){
        id = iD;
        name = n;
        gender = g;
        address = add;
        phone = ph;
        salary = sala;
    }
    /*Property */
    int getId(){
        return id;
    }
    /* Method  */
    void Input(){
        cout<<"Input ID      : ";cin>>id;
        cout<<"Input Name    : ";cin>>name;
        cout<<"Input Gender  : ";cin>>gender;
        cout<<"Input Address : ";cin>>address;
        cout<<"Input Phone   : ";cin>>phone;
        cout<<"Input Salary  : ";cin>>salary;
    }
    static void Header(){
        cout<<"\tID\tName\tGender\tAddress\tPhone\tSalary"<<endl;
    }
    void Output(){
        cout<<"\t"<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<address<<"\t"<<phone<<"\t"<<salary<<endl;
    }
};
int main(){
    Person per;
    per.Header();
    per.Output();
}