#include<iostream>
using namespace std;
class Time{
    private:
    double hh,mm,ss;
    public:
    void setHour(double h){
        hh = h;
    }
    void setMinute(double m){
        mm = m;
    }
    void setSecond(double s){
        ss = s;
    }
    Time operator+(const Time&t){
        Time time;
        time.hh = this -> hh + t.hh;
        time.mm = this -> mm + t.mm;
        time.ss = this -> ss + t.ss;
        return time;
    }
    void Output(){
        cout<<"Duration : "<<hh<<"hour"<<"/"<<mm<<"minute"<<"/"<<ss<<"second"<<endl;
    }
};