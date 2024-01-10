#include<iostream>
using namespace std;
class Lecture{
    protected:
        string lecture;
    public:
        /*Default Contrutor*/
        Lecture(){
            lecture = "Unknow";
        }
        void Input(){
            cout<<"Input Lecture : "; cin.ignore();getline(cin,lecture);
        }
        void Output(){
            cout<<"\t"<<lecture<<"\t";
        }
};
