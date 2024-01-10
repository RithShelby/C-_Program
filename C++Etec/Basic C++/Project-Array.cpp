#include<iostream>
#include<stdbool.h>
#include<stdlib.h>
using namespace std;
int main(){
    int id[20];
    string name[20],gender[20];
    float salary[30];
    int i,j,n,op;
    do{
   
        cout<<"\n1.Input\n2.Output\n3.Search\n4.Uppdate\n5.Remove\n6.Insert\n7.Sort\n8.Add\n9.Clear\n10.Exit\n";
        cout<<"Choose Option :   ";cin>>op;
        switch(op){
            case 1:{
                cout<<"Input Size of Index: ";cin>>n;
                for(i=0;i<n;i++){
                    cout<<"Input ID     :  ";cin>>id[i];
                    cout<<"Input Name   :  ";cin>>name[i];
                    cout<<"Input Gender :  ";cin>>gender[i];
                    cout<<"Input Salary :  ";cin>>salary[i];
                }
            }break;
            case 2:{
                for(i=0;i<n;i++){
                    cout<<"\nID      :  "<<id[i];
                    cout<<"\nName    :  "<<name[i];
                    cout<<"\nGender  :  "<<gender[i];
                    cout<<"\nSalary  :  "<<salary[i];
                }
            }break;
            case 3:{
                int search;
                bool check=true;
                cout<<"Input ID for Search :   ";cin>>search;
                for(i=0;i<n;i++){
                    if(search==id[i]){
                        check = false;
                        cout<<"Search Succcess";
                        cout<<"ID that you Search :"<<id[i];
                    }if(check==true){
                        cout<<"Search False";
                    }
                }
            }break;
            case 4:{
                int update;
                bool check = true;
                cout<<"Input Salary to Update :   ";cin>>update;
                for(i=0;i<n;i++){
                    if(update==salary[i]){
                        check = true;
                        cout<<"Input new Salary :  ";cin>>salary[i];
                        check = true;
                    }if(check==false){
                        cout<<"Update False";
                    }else{
                        cout<<"Update Success";
                    }
                }
            }break;
            case 5:{
                int remove;
                bool check = true;
                cout<<"Input ID to remove :  ";cin>>remove;
                for(i=0;i<n;i++){
                    if(remove==id[i]){
                        for(j=i;j<n;j++){
                            id[j] = id[j+1];
                            check = true;
                        }
                        n--;
                    }
                }if(check==false){
                    cout<<"Remove False";
                }else{
                    cout<<"Remove Success";
                }
            }break;
            case 6:{
                int insert;
                bool check = true;
                cout<<"Input ID to Insert:";cin>>insert;
                for(i=0;i<n;i++){
                    if(insert==id[i]){
                        for(j=n;j>=i;j--){
                            id[j]=id[j-1];
                        }
                        n++;
                        cout<<"Input New ID to insert :";cin>>id[i];
                        check = true;
                        break;
                    }
                }if(check==false){
                    cout<<"Insert False";
                }else{
                    cout<<"Insert Success";
                }
            }break;
            case 7:{
                int temp;
                bool check = true;
                for(i=0;i<n;i++){
                    for(j=i+1;j<n;j++){
                        if(id[i] > id[j]){
                            temp = id[i];
                            id[i] = id[j];
                            id[j] = temp;
                            check = true;
                        }
                    }
                }if(check==false){
                    cout<<"Sort False";
                }else{
                    cout<<"Sort Success";
                }
            }break;
            case 8:{
                int add;
                bool check = true;
                cout<<"Input More  :";cin>>add;
                for(i=0;i<n+add;i++){
                    cout<<"Input More ID     : ";cin>>id[i];
                    cout<<"Input More Name   : ";cin>>name[i];
                    cout<<"Input More gender : ";cin>>gender[i];
                    cout<<"Input More Salary : ";cin>>salary[i];
                    check = true;
                }if(check==false){
                    cout<<"Add False";
                }else{
                    cout<<"Add Success";
                    n+add;
                }
            }break;
            case 9:{
                system("cls");
            }break;
            case 10:{
                cout<<"Exit";
            }break;
        }
    }while(op!=10);
}