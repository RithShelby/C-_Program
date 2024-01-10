#include<iostream>
using namespace std;
class Student{
    /*Data memeber*/
    private:
        int id,age;
        char name[20];
        float s1,s2,s3;
    public:
    /* Method*/
    void Input(){
        cout<<"Input ID : ";cin>>id;
        cout<<"Input Name: ";cin.seekg(0,ios::end);cin.clear();cin.getline(name,20);
        cout<<"Input Age : ";cin>>age;
        cout<<"Input Score1 :";cin>>s1;
        cout<<"Input Score2 :";cin>>s2;
        cout<<"Input Score3 :";cin>>s3;
    }
    double Total(){
            return s1+s2+s3;
    }
    double Average(){
            return Total()/3;
    }
    char Grade(){
            if(Average()<50){
                return 'F';
            }else if(Average()<=60){
                return 'E';
            }else if(Average()<=70){
                return 'D';
            }else if(Average()<=80){
                return 'C';
            }else if(Average()<=90){
                return 'B';
            }else{
                return 'A';
            }
    }
    string Result(){
         if(Average()<50){
                return "Fail";
            }else{
                return "Passed";    
        }
    }
    void Header(){
        cout<<"ID\tName\tAge\tTotal\tAverage\tGrade\tResult"<<endl;
    }
    void Output(){
        cout<<id<<"\t"<<name<<"\t"<<age<<"\t"<<Total()<<"\t"<<Average()<<"\t"<<Grade()<<"\t"<<Result()<<endl;
    }
};
int main(){
    Student stu;
    stu.Input();
    stu.Header();
    stu.Output();
}