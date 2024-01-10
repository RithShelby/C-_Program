#include<iostream>
using namespace std;
class Employee{
    protected:
    int id;
    string name,gender,position;
    public:
    int getID(){
        return id;
    }
    string getName(){
        return name;
    }
    string getGender(){
        return gender;
    }
    string getPosition(){
        return position;
    }
    void setID(int ID){
        id = ID;
    }
    void setName(string Name){
        name = Name;
    }
    void setGender(string Gender){
        gender = Gender;
    }
    void setPosition(string Position){
        position = Position;
    }
    Employee(){

    }
    Employee(int ID,string Name,string Gender,string Posotion){
        id = ID;
        name = Name;
        gender = Gender;
        position = Posotion;
    }
    void Input(){
        cout<<"Input ID : ";cin>>id;
        cout<<"Input Name  : ";cin>>name;
        cout<<"Input Gender : ";cin>>gender;
        cout<<"Input Position : ";cin>>position;
    }
};
class Time{
    protected:
    int hour,ratePerHour;
    public:
    int getHour(){
        return hour;
    }
    float getratePerHour(){
        return ratePerHour;
    }
    void setHour(int h){
        hour = h;
    }
    void setratePerHour(float r){
        ratePerHour = r;
    }
    Time(){

    }
    Time(int Hour,int RatePerHour){
        hour = Hour;
        ratePerHour = RatePerHour;
    }
    void Input(){
        cout<<"Input Hour of Working : ";cin>>hour;
        cout<<"Input Rate in hour : ";cin>>ratePerHour;
    }
    int Salary(){
        return hour*ratePerHour*30;
    }
};
class Person : public Employee,Time{
    public:
    void Input(){
        Employee::Input();
        Time::Input();
    }
    void Output(){
        cout<<"ID\tName\tGender\tPositon\t\tHour\tRate-Per-Hour\tSalary"<<endl;
        cout<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<position<<"\t\t"<<hour<<"\t"<<ratePerHour <<"\t\t"<<Salary()<<"$"<<endl;
    }
};

int main(){
    int i,n;
    Person per;
    cout<<"Input Number of Employee : ";cin>>n;
    for(i=0;i<n;i++){
       cout<<"---------Employee["<<i+1<<"]---------"<<endl;
        per.Input();
    }
   for(i=0;i<n;i++){
        cout<<"---------Employee["<<i+1<<"]---------"<<endl;
        per.Output();
   }
//   Employee emp(1,"rith","M","IT");
//   emp.setID(10);
//   emp.Output();
};