#include<iostream>
#include<string.h>
#include<iomanip>
#include<windows.h>
using namespace std;
class Student{
    private:
    int id;
    char name[20],gender[20];
    float score_c,score_cpp,score_opp;
    public:
        void setID(int code){
            id = code;
        }
        /* Property */
        int getID(){
            return id;
        }
        Student(){
            id = 0;
            strcpy(name,"unknow");
            strcpy(gender,"unknow");
            this->score_c = score_c;
            this->score_cpp = score_cpp;
            this->score_opp = score_opp;
        }
        void Input(){
            cout<<"Input Name      : ";cin>>name;
            cout<<"Input Gender    : ";cin>>gender;
            cout<<"Input Score C   : ";cin>>score_c;
            cout<<"Input Score C++ : ";cin>>score_cpp;
            cout<<"Input Score OOP : ";cin>>score_opp;
        }
        double Total(){
            return score_c+score_cpp+score_opp;
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
            cout<<"\t"<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<score_c<<"\t\t"<<score_cpp<<"\t\t"<<score_opp<<"\t\t"<<Total()<<"\t"<<Average()<<"\t"<<Grade()<<endl;
        }
        void Header(){
            cout<<"\tID\tName\tGender\tScore C\t\tScore C++\tScore OOP\tTotal\tAverage\tGrade"<<endl;
        }
};
int main(){
    Student *stu;
    int i,j,n,op;
    do{
        cout<<"1. Input\t2. Output\t3. Search\t4. Update\t5. Delete\n6. Insert\t7. Sort\t\t8. Add\t\t9. Clear\t10. Exit"<<endl;
        cout<<"Choose Option :  ";cin>>op;
        switch(op){
            case 1:{
                cout<<"Input Number of Student :";cin>>n;
                stu = (Student *)malloc(n*sizeof(Student));
                for(i=0;i<n;i++){
                    cout<<"---------["<<i+1<<"]---------"<<endl;
                    (stu+i)->setID(i+1);
                    (stu+i)->Input();
                }
            }break;
            case 2:{
                (stu+i)->Header();
                for(i=0;i<n;i++){
                    (stu+i)->Output();
                }
            }break;
            case 3:{
                int search;
                cout<<"Input ID to Search : ";cin>>search;
                (stu+i)->Header();
                for(i=0;i<n;i++){
                    if(search == (stu+i)->getID()){
                        (stu+i)->Output();
                    }
                }
            }break;
            case 4:{
                int update;
                cout<<"Input ID to Update : ";cin>>update;
                for(i=0;i<n;i++){
                    if(update == (stu+i)->getID()){
                        (stu+i)->Input();
                    }
                }
            }break;
            case 5:{
                int Delete;
                bool check = true;
                cout<<"Input ID to Delete :";cin>>Delete;
                for(i=0;i<n;i++){
                    if(Delete == (stu+i)->getID()){
                        for(j=i;j<n;j++){
                            *(stu+j) = *(stu+j+1);
                        }
                        n--;
                    }
                }(check==false)?puts("Delete Fail"):puts("Delete Done");
            }break;
            case 6:{
                int insert;
                bool check = true;
                cout<<"Input ID to Insert : ";cin>>insert;
                for(i=0;i<n;i++){
                    if(insert == (stu+i)->getID()){
                        for(j=n;j>1;j--){
                            *(stu+j) = *(stu+j-1);
                        }
                        n++;
                        break;
                    }
                }(check==false)?puts("Insert Fail"):puts("Insert Done");
            }break;
            case 7:{
                Student temp;
                for(i=0;i<n;i++){
                    for(j=i;j<n;j++){
                        if((stu+i)->getID() < (stu+j)->getID()){
                        temp = *(stu+i);
                        *(stu+i) = *(stu+j);
                         *(stu+j) = temp;
                        }
                    }
                }
            }break;
            case 8:{
                int add;
                cout<<"Input More :";cin>>add;
                for(i=0;i<n+add;i++){
                    (stu+i)->Input();
                }n+=add;
            }break;
            case 9:{
                system("cls");
            }break;
        }
    }while(op!=10);
}