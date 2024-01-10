#include<iostream>
using namespace std;
class Marks{
    protected:
        string add,phone,dob;
    public:
        Marks(){
            add   = "unknow";
            phone = "unknow";
            dob   = "unknow";
        }
        void Input(){
            cout<<"Input Add   : ";getline(cin,add);
            cout<<"Input Phone : ";getline(cin,phone);
            cout<<"Input DOB   : ";getline(cin,dob);
        }
        void Output(){
            cout<<"\t\t"<<add<<"\t\t"<<phone<<"\t\t"<<dob;
        }
};