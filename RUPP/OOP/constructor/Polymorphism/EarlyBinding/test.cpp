#include<iostream>
using namespace std;
class Student{
    protected:
    int id;
    string name,sex;
    public:
    virtual void Input(){
        cout<<"Input ID ";cin>>id;
        cout<<"Input Name : ";cin>>name;
        cout<<"Input Sex : ";cin>>sex;
    }
    virtual void Output(){
        cout<<"ID\tName\tSex"<<endl;
        cout<<id<<"\t"<<name<<"\t"<<sex<<endl;
    }
};
class PhysicalFit :public Student{
    private:
    int w,h;
    public:
     void Input(){
        cout<<"Input Weight :";cin>>w;
        cout<<"Input Height : ";cin>>h;
    }
     void Output(){
        cout<<"Weight\tHeight"<<endl;
        cout<<w<<"\t"<<h<<endl;
    }
};
class AcademicFit :public Student{
    private:
      int w,h;
    public:
    void Input(){
        Student::Input();
        cout<<"Input Weight :";cin>>w;
        cout<<"Input Height : ";cin>>h;
    }
     void Output(){
        Student::Output();
        cout<<"Weight\tHeight"<<endl;
        cout<<w<<"\t"<<h<<endl;
    }
};
int main(){
    Student *ptr1,*ptr2,*ptr3;
    Student s;
    PhysicalFit p;
    AcademicFit a;
    ptr1 = &s;
    ptr2 = &p;
    ptr3 = &a;
    cout<<"Student "<<endl;
    ptr1->Input();
    ptr1->Output();
    cout<<"PhysicalFit"<<endl;
    ptr2->Input();
    ptr2->Output();
    cout<<"Acadamic"<<endl;
    ptr3->Input();
    ptr3->Output();
    
}
