#include"Time.h"
using namespace std;
int main(){
    Time t1;
    Time t2;
    t1.setHour(2);
    t1.setMinute(45);
    t1.setSecond(50);
    t2.setHour(1);
    t2.setMinute(50);
    t2.setSecond(30);
    t1.Output();
    t2.Output();
}