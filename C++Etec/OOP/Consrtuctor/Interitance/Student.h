#include"Marks.h"
#include"Department.h"
#include<time.h>
#include<stdlib.h>
class Student : public Department,public Marks{
    private:
    int id;
    string name,gender;
    float score_c,score_cpp,score_opp;
    public:
    Student(){
        Department:Department();
        Marks:Marks();
        id = 0;
        name       = "unknow";
        gender     = "unknow";
        score_c    = 0;
        score_cpp  = 0;
        score_opp  = 0;
    }
    void Input(){
        Department::Input();
        srand((unsigned)time(NULL));
        id = rand()%30;
        cout<<"Input Name   : ";getline(cin,name);
        cout<<"Input Gender : ";getline(cin,gender);
        Marks::Input();
        cout<<"Input Score C   : ";cin>>score_c;
        cout<<"Input Score C++ : ";cin>>score_cpp;
        cout<<"Input Score OPP : ";cin>>score_opp;
    }
    double Total(){
            return score_c+score_cpp+score_opp;
        }
    double Average(){
            return Total()/3;
        }
    string Grade(){
            if(Average()>=0 && Average()<50){
                return "F" ;
            }else if(Average()>=50 && Average()<60){
                return "E";
            }else if(Average()>=60 && Average()<70){
                return "D";
            }else if(Average()>=70 && Average()<80){
                return "C";
            }else if(Average()>=80 && Average()<90){
                return "B";
            }else{
                return "A";
            }
        }
        void Output(){
            Department::Output();
            cout<<"\t\t"<<id<<"\t\t"<<name<<"\t\t"<<gender;
            Marks::Output();
            cout<<"\t"<<score_c<<"\t\t"<<score_cpp<<"\t\t"<<score_opp<<"\t\t"<<Total()<<"\t\t"<<Average()<<"\t"<<Grade()<<endl;
        }
        string getName(){
            return name;
        }
        float getScoreC(){
            return score_c;
        }
};
void Header(){
    cout<<"\tLecture\tDepartment\tID\tName\tGender\tAddress\tPhone\t\tDate of Birth\t\tScore C\t\tScore C++\tScore OPP\tTotal\t\tAverage\tGrade"<<endl;
}