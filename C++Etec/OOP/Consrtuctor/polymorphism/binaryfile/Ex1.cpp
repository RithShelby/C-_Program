#include<iostream>
#include<fstream>
using namespace std;
class Test{
    private :
        int x;
    public:
    /*Method*/
        void Input(){
            cout<<"Input X : ";cin>>x;
        }
        void Output(){
            cout<<"\t"<<x;
        }
};
int main(){
    Test obj;
    fstream file;
    file.open("Test.bin",ios::out | ios::binary);
    for(int i=0;i<5;i++){
        obj.Input();
        file.write((char *)&obj,sizeof(obj));
    }
    file.close();
}