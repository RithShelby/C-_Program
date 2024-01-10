#include<iostream>
using namespace std;
class Employee{
    private:
    int code;
    string name;
    char sex;
    float salary;
    public:
    void Input(){
        cout<<"Input code   : ";cin>>code;
        cout<<"Input Name   : ";cin>>name;
        cout<<"Input sex    : ";cin>>sex;
        cout<<"Input salary : ";cin>>salary;
    }
    void Header(){
        cout<<"\tCode\tName\tSex\tSalary\n";
    }
    void Output(){
        cout<<"\t"<<code<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<endl;
    }
};
int main(){
    Employee obj;
    obj.Input();
    obj.Header();
    obj.Output();
}
