#include<iostream>
using namespace std;
class Super{
    private:
        virtual void Output()=0;
};
class Sub{
    public:
        void Output(){
            cout<<"Hello Crush"<<endl;
        }
};
int main(){
    Sub obj;
    obj.Output();
}