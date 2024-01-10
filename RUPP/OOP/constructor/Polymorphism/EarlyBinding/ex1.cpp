#include<iostream>
using namespace std;
class Generate{
    public:
    int max(int a,int b){
        return(a>b?a:b);
        // if(a > b)
        //     return a;
        // else
        //     return b;

    }
     float max(float a,float b){
        return(a>b?a:b);
        // if(a > b)
        //     return a;
        // else
        //    return b;

    }
    long max(long a,long b){
        return(a>b?a:b);
        // if(a > b)
        //     return a;
        // else
        //     return b;

    }
};
int main(){
    Generate g;
    cout<<"This is Int data"<<"\t"<<g.max(2,5)<<endl;
    cout<<"This is Long data"<<"\t"<<g.max(59,89)<<endl;
    cout<<"This is floa data"<<"\t"<<g.max(5.4f,2.4f)<<endl;
}