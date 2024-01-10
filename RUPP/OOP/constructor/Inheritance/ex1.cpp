/*#include<iostream>
#include<math.h>
using namespace std;
class Square{
   protected:
   int a;
   public:
    Square(){
        a = 0;
    }
    Square(int area){
        a = area;
    }
    void Input(){
        cout<<"Input Area of Square : ";cin>>a;
    }
    int SqaureArea(){
        return a*a;
    }
    int SquareVolume(){
        return 4*a;
    }
    void Output(){
        cout<<"Square Area\tSqaure Volume"<<endl;
        cout<<SqaureArea()<<"\t\t"<<SquareVolume();
    }
};
class Cube:public Square{
    private:
        int volume;
    public:
    Cube(int volume){
        this->volume = pow(volume,3);
    }

};
int main(){
}*/
#include<iostream>
using namespace std;
class Shape{
    public:
    int area;
    int volume;
};
class Square :public Shape{
    public:
    int a;
    Square(int a){
         this ->area = a*3;
         this->volume = a*4;
    }
};
class Cube : public Shape{
    public:
        int a;
    Cube(int a){
        this->volume = a*a*a;
    }
};
int main(){
    Square sq(3);
    Cube cube(4);
    cout<<"SquareArea : "<<sq.area<<endl;
    cout<<"Square Volume : "<<sq.volume<<endl;
    cout<<"Square of Cube :"<<cube.volume;
}
