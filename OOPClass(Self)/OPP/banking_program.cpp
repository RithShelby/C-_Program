#include<iostream>
using namespace std;
class Banking{
    private:
        double balance,deposit,withdraw;
    public:
        Banking(){
            balance = 0;
            deposit = 0;
            withdraw = 0;
        }
        void Input(){
            cout<<"Input Balance : ";cin>>balance;
            cout<<"Input Deposit : ";cin>>deposit;
            cout<<"Input Withdraw : ";cin>>withdraw;
        }
        double newbalance(){
            return (balance + deposit)-withdraw ;
        }
        void Output(){
            cout<<"\t$"<<balance <<"\t\t$"<<deposit<<"\t\t$"<<withdraw<<"\t\t$"<<newbalance()<<endl;
        }
        void Header(){
            cout<<"\tBalance\t\tDeposit\t\twithdraw\tNew Balance"<<endl;
        }
        double getBL(){
            return balance;
        }
};     
int main(){
    Banking obj;
    int i,n,j,op;
        do{
        cout<<"1.Input\t2.Output\t3.Search"<<endl;
        cout<<"Choose Option :  ";cin>>op;
            switch(op){
                case 1:{
                    cout<<"Input n for number : ";cin>>n;
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
                    double search;
                    cout<<"Input Balance to search : ";cin>>search;
                    if(search == obj.getBL()){
                        for(i=0;i<n;i++){
                            obj.Header();
                            obj.Output();
                        }
                    }
                }break;
            }
    }while(op!=4);
}