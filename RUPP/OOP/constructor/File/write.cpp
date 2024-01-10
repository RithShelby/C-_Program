#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream myfile;
    myfile.open("text.txt", ios::app);
    myfile << "Hello world\n";
    myfile.close();
}