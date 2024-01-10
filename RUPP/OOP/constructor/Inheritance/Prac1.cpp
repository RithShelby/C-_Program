#include<iostream>
using namespace std;
class Kid{
    protected:
    int id,age;
    string name;
    public:
    Kid(){}
    Kid(int ID,int Age,string Name){
        id = ID;
        age = Age;
        name = Name;
    }
    void Input(){
        cout<<"Input ID ";cin>>id;
        cout<<"Input Age ";cin>>age;
        cout<<"Input Name ";cin>>name;
    }
    void Output(){
        cout<<id<<"\t"<<age<<"\t"<<name<<endl;
    }
};
class KG : public Kid{
    private:
    int grade;
    float fee;
    public:
    KG(){}
    KG(int Grade,float Fee){
        grade = Grade;
        fee = Fee;
    }
    void Input(){
        Kid ::Input();
        cout<<"Input Grade : ";cin>>grade;
        cout<<"Input Fee : ";cin>>fee;
    }
    void Output(){
        cout<<"ID\tAge\tName\tGrade\tFee"<<endl;
        cout<<id<<"\t"<<age<<"\t"<<name<<"\t"<<grade<<"\t"<<fee<<"$"<<endl;
    }
};
int main(){
    KG kg;
    kg.Input();
    kg.Output();
}
