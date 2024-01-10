#include<iostream>
#include<string.h>
using namespace std;
class People{
    private:
    //data member
    int id ,tel;
    char name[10],gender[5];
    string address;
    public: 
    // constructor
    People(){
        id = 0;
        tel = 0;
        address  = "Unknow";
        strcpy(name,"unknow");
        strcpy(gender,"unknow");
    }
    /*Constructor has parameter*/
    People(int ID,int Tel,char Name[10],char Gender[5],string Address){
        id = ID;
        tel = Tel;
        name[10] = Name[10];
        gender[5] = Gender[5];
        address = Address;
    }
    //Property
    int getID(){
        return id;
    }
    void setID(int ID){
        id = ID;
    }
    int getTel(){
        return tel;
    }
    void setTel(int Tel){
        tel = Tel;
    }
    char getName(){
        return name[10];
    }
    void setName(char Name[10]){
        name[10] = Name[10];
    }
    char getGender(){
        return gender[5];
    }
    void setGender(char Gender[5]){
        gender[5] = Gender[5];
    }
    string getAddress(){
        return address;
    }
    void setAddress(string Address){
        address = Address;
    }
   
    // method
    void Input(){
        cout<<"Input ID : ";cin>>id;
        cout<<"Input Name : ";cin.seekg(0,ios::end);cin.clear();cin.getline(name,10);
        cout<<"Input Gender : ";cin.seekg(0,ios::end);cin.clear();cin.getline(gender,5);
        cout<<"Input Phone Number : ";cin>>tel;
        cout<<"Input Address : ";cin>>address;
    }
    void Output(){
        cout<<id<<"\t"<<name<<"\t"<<gender<<"\t\t"<<tel<<"\t\t"<<address<<endl;
    }
    void Header(){
        cout<<"ID\tName\t\tGender\t\tPhone Number\t\tAddress"<<endl;
    }
};
int main(){
    People per[10];
 int i,j,n,op;
    do{
       cout<<"1. Input\t2. Output\t3. Search\t4. Update\t5. Delete\t6. Exit"<<endl;
       cout<<"Choose Option : ";cin>>op;
       switch(op){
        case 1:{
           cout<<"Input Number for People that you want : " ;cin>>n;
           for(i=0;i<n;i++){
            cout<<"Person "<<i+1<<""<<endl;
            per[i].Input();
           }
        }break;
        case 2:{
            per[i].Header();
            for(i=0;i<n;i++){
                per[i].Output();
            }
        }break;
        case 3:{
            int search;
            cout<<"Input ID to search people : ";cin>>search;
            per[i].Header();
            for(i=0;i<n;i++){
                if(search==per[i].getID()){
                    per[i].Output();
                }
            }
        }break;
        case 4:{
            char update[20];
            cout<<"Input Name to update people : ";cin>>update;cin.seekg(0,ios::end);cin.clear();cin.getline(update,20);
            for(i=0;i<n;i++){
                if(update[20]== per[i].getName());
                per[i].Input();
            }
        }break;
        case 5:{
            string Delete;
            cout<<"Input Address to Delete people : ";cin>>Delete;
             for(i=0;i<n;i++){
                if(Delete==per[i].getAddress()){
                    for(j=i;j<n;j++){
                    per[j] = per[j+1];
                    }
                    n--;  
                }
            }
        }break;
        case 6:{
            cout<<"You are exit!!";
        }break;
       }
    } while (op!=6);  
}