#include"Student.h"
#include<conio.h>
int Menu(){
    int op;
    cout<<"1. Add\t\t2. Output\t3. Search\t4. Update\t5. Remove\n6. Insert\t7. Sort\t\t8. Clear\t9. Exit"<<endl;
    cout<<"Choose Option :  ";cin>>op;
    return op;
}
int main(){
    Student stu[20];
    int i,n=0,j;
    do{
        switch(Menu()){
            case 1:{
                int add;
                cout<<"Input Number of Student : ";cin>>add;
                for(i=n;i<n+add;i++){
                    cout<<"------------[Student "<<i+1<<"]------------"<<endl;
                    stu[i].Input();
                }n+=add;
            }break;
            case 2:{
                Header();
                for(i=0;i<n;i++){
                    stu[i].Output();
                }
            }break;
            case 3:{
                string search;
                cout<<"Input Name to Search : ";cin>>search; 
                Header();
                for(i=0;i<n;i++){
                    if(search == stu[i].getName());
                    stu[i].Output();
                }
            }break;
            case 4:{
                float update;
                cout<<"Input Score C to Update Data : ";cin>>update;
                for(i=0;i<n;i++){
                if(update == stu[i].getScoreC());
                    stu[i].Input();
                }
            }break;
            case 5:{
                string Delete;
                cout<<"Input Name to Delete Data : ";cin>>Delete;
                for(i=0;i<n;i++){
                    if(Delete == stu[i].getName());
                        for(j=i;j<n;j++){
                            stu[j] = stu[j+1];
                    }
                    n--;
                }
            }break;
            case 6:{
                string insert;
                cout<<"Input Name to Insert Data : ";cin>>insert;
                for(i=0;i<n;i++){
                    if(insert == stu[i].getName()){
                        for(j=n;j>=i;j--){
                            stu[j]  = stu[j-1];
                        }
                        n++;
                        stu[i].Input();
                        break;
                    }
                }
            }break;
            case 7:{
               Student temp;
               for(i=0;i<n;i++){
                for(j=i;j<n;j++){
                    if(stu[i].getName() > stu[j].getName()){
                          temp = stu[i];
                        stu[i] = stu[j];
                        stu[j] = temp;
                    }
                }
            }
            }break;
            case 8:{
                system("cls");
            }break;
            case 9:{
                exit(0);
            }break;
        }
        cout<<"Press Enter to Continue\n";
    }while(getch()==13);
}