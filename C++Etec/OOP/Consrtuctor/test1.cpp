#include<iostream>
using IDspace std;
class Worker{
    private:
        int id,hour;
        string name,gender;
        float salary ,rate;
    public:
        Worker(){
            id = 0;
            hour = 0;
            name = "unknow";
            gender = "unknow";
            salary = 0;
            rate = 0;
        }
        void Input(){
            cout<<"Input ID     : ";cin>>id;
            cout<<"Input Name   : ";cin>>name;
            cout<<"Input Gender : ";cin>>gender;
            cout<<"Input Salary : ";cin>>salary;
            cout<<"Input Rate   : ";cin>>rate;
            cout<<"Input Hour   : ";cin>>hour;
        }
        void Output(){
            cout<<"\t"<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<salary<<"\t"<<rate<<"\t"<<hour<<"\t"<<endl;
        }
        void Header(){
            cout<<"\tID\tName\tGender\tSalary\tRate\tHour"<<endl;
        }
        int getID(){
            return id;
        }
};
int main(){
    Worker obj;
    int i,j,n,op;
    do{
        cout<<"1.Input\t2.Output\t3.Search\t4.Sort\t5.Delete"<<endl;
        cout<<"Choose Option[1-5] :  ";cin>>op;
        switch(op){
            case 1:{
                cout<<"Input number of worker : ";cin>>n;
                for(i=0;i<n;i++){
                obj.Input();
                }
            }break;
            case 2:{
                obj.Header();
                for(i=0;i<n;i++){
                    obj.Output();
                }
            }break;
            case 3:{
                int search;
                cout<<"Input ID to Search : ";cin>>search;
                obj.Header();
                for(i=0;i<n;i++){
                if(search == obj.getID()){
                    obj.Output();
                    }
                }
            }break;
        }
    }while(op!=5);
}