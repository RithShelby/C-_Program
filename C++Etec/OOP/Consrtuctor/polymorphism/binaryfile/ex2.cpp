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
    file.open("Test.bin",ios::in | ios::binary);
    while(file.read((char *)&obj,sizeof(obj))){
        obj.Output();
    }
    file.close();
}