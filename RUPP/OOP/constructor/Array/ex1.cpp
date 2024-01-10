#include<iostream>
using namespace std;
class Array{
    private:
    int arr[20];
    int i,n;
    public:
     void Input(){ 
        for(i=0;i<n;i++){
        cout<<"Input Array element : ";cin>>arr[i];
        }
    }
   void Output(){
    cout<<"All Array :"<<endl;
        for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
        }
   }
   void Sort(){

   }
};  
int main(){
    int i;
    int n; 
    Array arr[i];
    cout<<"Input N ";cin>>n;
    arr[i].Input();
    arr[i].Output();
}