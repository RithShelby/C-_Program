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
        cout<<"Input Code  : ";cin >>code;
        cout<<"Input Name  : ";cin >>name;
        cout<<"Input Sex   : ";cin >>sex;
        cout<<"Input Salary: ";cin>>salary;
    }
    void Header(){
       cout<<"Code\tName\tSex\tSalary\n";
    }
    void Output(){
        cout<<code<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<endl;
    }
};
int main(){
    Employee obj;
    obj.Input();
    obj.Header();
    obj.Output();
}
