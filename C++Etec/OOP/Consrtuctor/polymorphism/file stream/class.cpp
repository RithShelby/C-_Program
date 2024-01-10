#include<iostream>
#include<fstream>
#include <cstring>
using namespace std;
class Employee{
    private:
        int id;
        char name[20],gender[20];
        float salary;
    public:
        /*Default Constructor*/
        Employee(){
            id = 0;
            strcpy(name,"Unknow");
            strcpy(gender,"Unknow");
            salary = 0;
        }
        /*Method*/
        void Input(){
            cout<<"Input ID : ";cin>>id;
            cout<<"Input Name : ";cin>>name;
            cout<<"Input Gender : ";cin>>gender;
            cout<<"Input Salary : ";cin>>salary;
        }
        void Output(){
            cout<<"\t"<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<salary<<endl;
        }  
        void Header() {
            cout<<"\tID\tName\tGender\tSalary"<<endl;
        }
        /*Property*/  
        int getID(){
            return id;
        }
};
int main(){
    Employee emp;
    Employee obj;
    fstream file,temp;
    int i,n,op;
    do{
        cout<<"1. Input\t2. Output\t3. Search\t4. Update\t5. Delete\n6. Insert\t7. Exit"<<endl;
        cout<<"Choose Option Please : ";cin>>op;
        switch (op){
            case 1:{
                file.open("Employee.txt",ios::app);
                cout<<"Enter number of Employee : ";cin>>n;
                for(i=0;i<n;i++){
                    emp.Input();
                    file.write((char *)&emp,sizeof(emp));
                }
                file.close();
            }break;
            case 2:{
                file.open("Employee.txt",ios::in);
                emp.Header();
                while(file.read((char *)&emp,sizeof(emp))){
                    emp.Output();
                }
                file.close();
            }break;
            case 3:{
                file.open("Employee.txt",ios::in);
                int search;
                cout<<"Input ID to Search : ";cin>>search;
                emp.Header();
                while(file.read((char *)&emp,sizeof(emp))){
                    if(search == emp.getID()){
                        emp.Output();
                    }
                }
                file.close();
            }break;
            case 4:{
                temp.open("Person.txt",ios::out);
                file.open("Employee.txt",ios::in);
                int update;
                cout<<"Input ID to Update : ";cin>>update;
                while(file.read((char *)&emp,sizeof(emp))){
                    if(update == emp.getID()){
                        obj.Input();
                        temp.write((char *)&obj,sizeof(obj));
                    }else{
                        temp.write((char *)&emp,sizeof(emp));
                    }
                }
                file.close();
                temp.close();
                remove("Employee.txt");
                rename("Person.txt","Employee.txt");
            }break;
            case 5:{
                temp.open("Person.txt",ios::out);
                file.open("Employee.txt",ios::in);
                int Delete;
                cout<<"Input ID to delete :  ";cin>>Delete;
                while(file.read((char *)&emp,sizeof(emp))){
                    if(Delete == emp.getID()){
                        temp.write((char *)&obj,sizeof(obj));
                    }else{
                        temp.write((char *)&emp,sizeof(emp));
                    }
                }
                file.close();
                temp.close();
                remove("Employee.txt");
                rename("Person.txt","Employee.txt");
            }break;
            case 6:{
                temp.open("Person.txt",ios::out);
                file.open("Employee.txt",ios::in);
                int insert;
                cout<<"Input ID to insert : ";cin>>insert;
                while(file.read((char *)&emp,sizeof(emp))){
                    if(insert == emp.getID()){
                        obj.Input();
                        temp.write((char *)&obj,sizeof(obj));
                        temp.write((char *)&emp, sizeof(emp));
                    }else{
                        temp.write((char *)&emp,sizeof(emp));
                    }
                }
                file.close();
                temp.close();
                remove("Employee.txt");
                rename("Person.txt","Employee.txt");
            }break;
        }
    }while(op!=7);
}