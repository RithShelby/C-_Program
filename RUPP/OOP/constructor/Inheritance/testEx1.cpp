#include<iostream>
#include<math.h>
using namespace std;
class Square{
    protected:
    int area;
    public:
    Square(){
        area = 0;
    }
    Square(int a){
        area = a;
    }
    void Input(){
        cout<<"Input Area : ";cin>>area;
    }
    int SquareArea(){
        return pow(area,2);
    }
    int SquareVolume(){
        return area*4; 
    }
    void Output(){
        cout<<"Area of Square\tVolume of Square"<<endl;
        cout<< SquareArea()<<"\t\t"<<SquareVolume()<<endl;
    }
};
class Cube :public Square{
    public:
    Cube(){
        area = 0;
    }
    Cube(int a){
        area = a;
    }
    int CubeVolume(){
        return pow(area,3);
    }
    void Output(){
        Square::Output();
        cout<<"Volume of Cube"<<endl;
        cout<<CubeVolume();
    }
};
int main(){
    Cube cube;
    cube.Input();
    cube.Output();
}