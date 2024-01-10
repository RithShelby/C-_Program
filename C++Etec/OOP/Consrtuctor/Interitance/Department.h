#include"Lecture.h"
class Department : public Lecture{
    protected:
        string department;
    public:
        Department(){
            department = "Unknow";
        }
        void Input(){
            Lecture::Input();
            cout<<"Input Department : ";getline(cin,department);
        }
        void Output(){
            Lecture::Output();
            cout<<department<<"\t";
        }
};
