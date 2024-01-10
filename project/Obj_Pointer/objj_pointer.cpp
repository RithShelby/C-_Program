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
        /* Property */
        void setID(int code){
            id = code;
        }
        int getID(){
            return id;
        }
        char* getName(){
            return name;
        }
        char* getGender(){
            return gender;
        }
        /*Default Contructor*/
        Student(){
            id = 0;
            strcpy(name,"unknow");
            strcpy(gender,"unknow");
            this->score_c = score_c;
            this->score_cpp = score_cpp;
            this->score_opp = score_opp;
        }
        /*Method*/
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
                string choose;
                int id_update;
                char s_update[20];
                cout<<"[ID , Name , Gender] Update by what ? ->";cin>>choose;
                if(choose == "id" || choose == "ID"){
                    cout<<"Input ID for Update : ";cin>>id_update;
                    for(i=0;i<n;i++){
                        if(id_update == (stu + i)->getID()){
                            (stu +i )->Input();
                        }
                    }
                }
                if(choose == "Name" || choose == "name"){   // (|| it mean or )
                    cout<<"Input Name for Update : ";cin>>s_update;
                    for(i=0;i<n;i++){
                        if(stricmp(s_update,(stu+i)->getName())==0){
                            (stu+i)->Input();
                        }
                    }
                }
                if(choose == "Gender"|| choose == "gender"){
                    cout<<"Input Gender for Update : ";cin>>s_update;
                    for(i=0;i<n;i++){
                        if(stricmp(s_update,(stu+i)->getGender())==0){
                            (stu+i)->Input();
                        }
                    }
                }
            }break;
            case 5:{
                string choose;
                int id_delete;
                char s_delete[20];
                cout<<"[ID , Name , Gender] Delete by what ? ->";cin>>choose;
                if(choose == "id" || choose == "ID"){
                    cout<<"Input ID for Update : ";cin>>id_delete;
                    for(i=0;i<n;i++){
                        if(id_delete == (stu + i)->getID()){
                            for(j=i;j<n;j++){
                                *(stu+j) = *(stu+j+1);
                            }
                            n--;
                        }
                    }
                }
                if(choose == "Name" || choose == "name"){
                    cout<<"Input Name for Delete : ";cin>>s_delete;
                    for(i=0;i<n;i++){
                        if(stricmp(s_delete,(stu+i)->getName())==0){
                            for(j=i;j<n;j++){
                                *(stu+j) = *(stu+j+1);
                            }
                            n--;
                        }
                    }
                }
                if(choose == "Gender" || choose == "gender"){
                    cout<<"Input Name for Delete : ";cin>>s_delete;
                    for(i=0;i<n;i++){
                        if(stricmp(s_delete,(stu+i)->getGender())==0){
                            for(j=i;j<n;j++){
                                *(stu+j) = *(stu+j+1);
                            }
                            n--;
                        }
                    }
                }
            }break;
            case 6:{
                string choose;
                int id_insert;
                char s_insert[20];
                cout<<"[ID , Name , Gender] Insert by what ? ->";cin>>choose;
                if(choose == "id" || choose == "ID"){
                    cout<<"Input ID for insert : ";cin>>id_insert;
                    for(i=0;i<n;i++){
                        if(id_insert == (stu + i)->getID()){
                            for(j=n;j>=i;j++){
                                *(stu+j) = *(stu+j-1);
                            }
                            n++;
                        }
                    }
                }
                if(choose == "name" || choose == "Name"){
                    cout<<"Input Name for indert : ";cin>>id_insert;
                    for(i=0;i<n;i++){
                        if(stricmp(s_insert,(stu+i)->getName())==0){
                            for(j=n;j>=i;j--){
                                *(stu+j) = *(stu+j-1);
                            }
                            n++;
                            (stu+i)->Input();
                            break;
                        }
                    }
                }
                  if(choose == "gender" || choose == "Gender"){
                    cout<<"Input Gender for indert : ";cin>>id_insert;
                    for(i=0;i<n;i++){
                        if(stricmp(s_insert,(stu+i)->getGender ())==0){
                            for(j=n;j>=i;j--){
                                *(stu+j) = *(stu+j-1);
                            }
                            n++;
                            (stu+i)->Input();
                            break;
                        }
                    }
                }
            }break;
            case 7:{
            // sort (small to big) // reverse(big to small)
                string choose;
                Student temp;
                string reverse_iterator;
                cout<<"Sort by what [ID,Name,Gender,Total,Average,Grade] : ";cin>>choose;
                if(choose == "ID"||choose =="id"){
                    cout<<"Sort or Reverse : ";cin>>reverse_iterator;
                    if(reverse_iterator =="Sort"|| reverse_iterator =="sort"){
                        for(i=0;i<n;i++){
                            for(j=i+1;j<n;j++){
                                if((stu+i)->getID() > (stu+i)->getID()){
                                        temp = *(stu+i);
                                        *(stu+i) = *(stu+j);
                                        *(stu+j) = temp;
                                    }
                            }
                        }
                    }
                }
                    if(reverse_iterator =="Reverse"|| reverse_iterator =="reverse"){
                        for(i=0;i<n;i++){
                            for(j=i+1;j<n;j++){
                                if((stu+i)->getID() < (stu+i)->getID()){
                                        temp = *(stu+i);
                                        *(stu+i) = *(stu+j);
                                        *(stu+j) = temp;
                                    }
                            }
                        }
                    }
                    if(choose == "Name"||choose =="name"){
                    cout<<"Sort or Reverse : ";cin>>reverse_iterator;
                    if(reverse_iterator =="Sort"|| reverse_iterator =="sort"){
                        for(i=0;i<n;i++){
                            for(j=i+1;j<n;j++){
                                if(stricmp((stu+i)->getName(),(stu+j)->getName())>0){
                                        temp = *(stu+i);
                                        *(stu+i) = *(stu+j);
                                        *(stu+j) = temp;
                                    }
                            }
                        }
                    }
                }
                    if(reverse_iterator =="Reverse"|| reverse_iterator =="reverse"){
                        for(i=0;i<n;i++){
                            for(j=i+1;j<n;j++){
                                if(stricmp((stu+i)->getName(),(stu+j)->getName())<0){
                                        temp = *(stu+i);
                                        *(stu+i) = *(stu+j);
                                        *(stu+j) = temp;
                                    }
                            }
                        }
                    }
                    if(choose == "Gender"||choose =="gender"){
                    cout<<"Sort or Reverse : ";cin>>reverse_iterator;
                    if(reverse_iterator =="Sort"|| reverse_iterator =="sort"){
                        for(i=0;i<n;i++){
                            for(j=i+1;j<n;j++){
                                if(stricmp((stu+i)->getGender(),(stu+j)->getGender())>0){
                                        temp = *(stu+i);
                                        *(stu+i) = *(stu+j);
                                        *(stu+j) = temp;
                                    }
                            }
                        }
                    }
                }
                    if(reverse_iterator =="Reverse"|| reverse_iterator =="reverse"){
                        for(i=0;i<n;i++){
                            for(j=i+1;j<n;j++){
                                if(stricmp((stu+i)->getGender(),(stu+j)->getGender())<0){
                                        temp = *(stu+i);
                                        *(stu+i) = *(stu+j);
                                        *(stu+j) = temp;
                                    }
                            }
                        }
                    }
                    if(choose == "Total"||choose =="total"){
                    cout<<"Sort or Reverse : ";cin>>reverse_iterator;
                    if(reverse_iterator =="Sort"|| reverse_iterator =="sort"){
                        for(i=0;i<n;i++){
                            for(j=i+1;j<n;j++){
                                if((stu+i)->Total() > (stu+j)->Total()){
                                        temp = *(stu+i);
                                        *(stu+i) = *(stu+j);
                                        *(stu+j) = temp;
                                    }
                            }
                        }
                    }
                }
                    if(reverse_iterator =="Reverse"|| reverse_iterator =="reverse"){
                        for(i=0;i<n;i++){
                            for(j=i+1;j<n;j++){
                                if((stu+i)->Total() < (stu+j)->Total()){
                                        temp = *(stu+i);
                                        *(stu+i) = *(stu+j);
                                        *(stu+j) = temp;
                                    }
                            }
                        }
                    }
                    if(choose == "Average"||choose =="average"|| choose =="avg"){
                    cout<<"Sort or Reverse : ";cin>>reverse_iterator;
                    if(reverse_iterator =="Sort"|| reverse_iterator =="sort"){
                        for(i=0;i<n;i++){
                            for(j=i+1;j<n;j++){
                                if((stu+i)->Average() > (stu+j)->Average()){
                                        temp = *(stu+i);
                                        *(stu+i) = *(stu+j);
                                        *(stu+j) = temp;
                                    }
                            }
                        }
                    }
                }
                    if(reverse_iterator =="Reverse"|| reverse_iterator =="reverse"){
                        for(i=0;i<n;i++){
                            for(j=i+1;j<n;j++){
                                if((stu+i)->Average() < (stu+j)->Average()){
                                        temp = *(stu+i);
                                        *(stu+i) = *(stu+j);
                                        *(stu+j) = temp;
                                    }
                            }
                        }
                    }
                     if(choose == "Grade"||choose =="grade"){
                    cout<<"Sort or Reverse : ";cin>>reverse_iterator;
                    if(reverse_iterator =="Sort"|| reverse_iterator =="sort"){
                        for(i=0;i<n;i++){
                            for(j=i+1;j<n;j++){
                                if((stu+i)->Grade() > (stu+j)->Grade()){
                                        temp = *(stu+i);
                                        *(stu+i) = *(stu+j);
                                        *(stu+j) = temp;
                                    }
                            }
                        }
                    }
                }
                    if(reverse_iterator =="Reverse"|| reverse_iterator =="reverse"){
                        for(i=0;i<n;i++){
                            for(j=i+1;j<n;j++){
                                if((stu+i)->Grade() < (stu+j)->Grade()){
                                        temp = *(stu+i);
                                        *(stu+i) = *(stu+j);
                                        *(stu+j) = temp;
                                    }
                            }
                        }
                    }
            }break;
            case 8:{
                int add;
                cout<<"Add more : ";cin>>add;
                for(i=n;i<n+add;i++){
                    (stu+i)->setID(i+add);
                    (stu+i)->Input();
                }n+=add;
            }break;
            case 9:{
                system("cls");
            }break;
            case 10:{
                exit(0);
            }break;
        }
    }while(op!=10);
}