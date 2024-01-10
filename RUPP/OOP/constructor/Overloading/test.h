#include<ctime>
#include<iostream>
using namespace std;
class CurrentDateTime{
    private:
    int YY,MM,DD,hh,mm,ss;
    public:
    CurrentDateTime(){
         time_t now = time(0);
         tm* ltm = localtime(&now);
            YY = 1900 + ltm->tm_mon;
            MM = 1 + ltm->tm_mon;
            DD = 1 + ltm->tm_mday;
            hh = 1 + ltm->tm_hour;
            mm = 1 + ltm->tm_min;
            ss = 1 + ltm->tm_sec;
    }
    void printDate(){
        cout<<DD<<"/"<<MM<<"/"<<YY<<endl;
    }
     void printTime(){
        cout<<hh<<"/"<<mm<<"/"<<ss<<endl;
    }
};