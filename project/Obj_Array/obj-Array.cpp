#include<iostream>
using namespace std;
class Person{
/*Data member*/
    int id;
    string name,gender,address,phone;
    float salary;
    public:
    /* Default Constructor*/
    Person(){
        id       = 0;
        name     = "Unknow";
        gender   = "Unknow";
        address  = "Unknow";
        phone    = "Unknow";
        salary   = 0.0;
    }
    /*Constructor has parameter*/
    Person(int id,string name,string gender,string address,string phone,float salary){
    this->id   = id;
    this->name = name;
    this->gender = gender;
    this->address= address;
    this->phone = phone;
    this->salary = salary;
    }
    /*Property */
    int getId(){
        return id;
    }
    string getName(){
        return name;
    }
    /* Method  */
    void Input(){
        cout<<"Input ID      : ";cin>>id;
        cout<<"Input Name    : ";cin>>name;
        cout<<"Input Gender  : ";cin>>gender;
        cout<<"Input Address : ";cin>>address;
        cout<<"Input Phone   : ";cin>>phone;
        cout<<"Input Salary  : ";cin>>salary;
    }
    static void Header(){
        cout<<"\tID\tName\tGender\tAddress\t\tPhone\t\tSalary"<<endl;
    }
    void Output(){
        cout<<"\t"<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<address<<"\t\t"<<phone<<"\t\t"<<salary<<endl;
    }
};// you can add (per[10]) here
int main(){
    Person per[10];
    int i,n=0,j,op;
    do{
    cout<<"1. Input\t2. Output\t3. Search\t4. Update\t5. Delete\n6. Insert\t7. Sort\t\t8. Clear\t9. Exit"<<endl;
    cout<<"Choose Option :  ";cin>>op;
    switch(op){
        case 1:{
            int add;
            cout<<"Input Number of Person :  ";cin>>add;
            for(i=n;i<n+add;i++){
                cout<<"------------["<<i+1<<"]------------"<<endl;
                per[i].Input();
            }n+=add;
        }break;
        case 2:{
            per[i].Header();
            for(i=0;i<n;i++){
                per[i].Output();
            }
        }break;
        case 3:{
            string search;
            cout<<"Input Name to Search : ";cin>>search;
            per[i].Header();
            for(i=0;i<n;i++){
                if(search==per[i].getName()){
                    per[i].Output();
                }
            }
        }break;
        case 4:{
            string update;
            cout<<"Input Name to Update : ";cin>>update;
            for(i=0;i<n;i++){
                if(update==per[i].getName()){
                    per[i].Input();
                }
            }
        }break;
        case 5:{
            string Delete;
            bool check = true;
            cout<<"Input Name to Delete : ";cin>>Delete;
            for(i=0;i<n;i++){
                if(Delete==per[i].getName()){
                    for(j=i;j<n;j++){
                    per[j] = per[j+1];
                    }
                    n--;  
                }
            }(check==false)?puts("Remove Fail"):puts("Remove Done");
        }break;
        case 6:{
            string insert;
            bool check = true;
            cout<<"Input Name to Insert : ";cin>>insert;
            for(i=0;i<n;i++){
                if(insert==per[i].getName()){
                    for(j=n;j>i;j--){
                    per[j] = per[j-1];
                    }
                    n++;
                    per[i].Input();
                    break;
                }
            }(check==false)?puts("Insert Fail"):puts("Insert Done");
        }break;
        case 7:{
        /* New Object */
            Person temp;
            for(i=0;i<n;i++){
                for(j=i;j<n;j++){
                    if(per[i].getName() > per[j].getName()){
                          temp = per[i];
                        per[i] = per[j];
                        per[j] = temp;
                    }
                }
            }
        }break;
        case 8:{
            system("cls");
        }break;
    }
    }while(op==9);
}
