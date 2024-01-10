#include<iostream>
using namespace std;
class Box{
    private:
    double length,breadth,height;
    public:
    double getVolume(void){
        return length * breadth *height;
    }
    void setLength(double len){
        length = len;
    }
    void setBreadth(double bre){
        breadth = bre;
    }
    void setHeight(double he){
        height = he;
    }
    // Overloading + operater to add two box objects
    Box operator+ (const Box&b){
        Box box;
        box.length = this -> length + b.length;
        box.breadth = this -> breadth + b.breadth;
        box.height = this -> height + b.height;
        return box;
    }
};
int main(){
    Box box1;
    Box box2;
    Box box3;
    double volume = 0.0;
    box1.setLength(6.0);
    box1.setBreadth(7.0);
    box1.setHeight(5.0);
    // volume of box 1
    volume = box1.getVolume();
    cout<<"Volume of Box1 : "<<volume<<endl;
    // you can add another box 
}