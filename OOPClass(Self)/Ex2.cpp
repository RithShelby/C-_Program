#include<iostream>
using namespace std;
class Student{
    private:
    int id;
    string name,gender;
    float score1,score2,score3;
    public:
        void Input(){
            cout<<"Input ID     : ";cin>>id;
            cout<<"Input name   : ";cin>>name;
            cout<<"Input gender : ";cin>>gender;
            cout<<"Input score1 : ";cin>>score1;
            cout<<"Input score2 : ";cin>>score2;
            cout<<"Input score3 : ";cin>>score3;
        }
        double Total(){
            return score1+score2+score3;
        }
        double Average(){
            return Total()/3;
        }
        char Grade(){
            if(Average()>=0 && Average()<50){
                return 'F';
            }else if(Average()>=50 && Average()<60){
                return 'E';
            }else if(Average()>=60 && Average()<70){
                return 'D';
            }else if(Average()>=70 && Average()<80){
                return 'C';
            }else if(Average()>=80 && Average()<90){
                return 'B';
            }else{
                return 'A';
            }
        }
        void Output(){
            cout<<"\t"<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<score1<<"\t"<<score2<<"\t"<<score3<<"\t"<<Total()<<"\t"<<Grade()<<endl;
        }
        void Header(){
            cout<<"\t[ID\tName\tGender\tScore1\tScore2\tScore3\tTotal\tGrade]"<<endl;
        }
};
int main(){
    Student obj;
    obj.Input();
    obj.Header();
    obj.Output();
}