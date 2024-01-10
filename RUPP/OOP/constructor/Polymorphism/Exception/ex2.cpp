#include <iostream>
using namespace std;
// return function has parameter
double zeroDivision(int x, int y)
{
    if (y == 0)
    {
        throw "Division by zero ";
    }
    return (x / y);
}
int main()
{
    int a, b;
    float c = 0;
    cout << "Input A :";
    cin >> a;
    cout << "Input B :";
    cin >> b;
    try
    {
        c = zeroDivision(a, b);
        cout << c << endl;
    }
    catch (const char *message)
    {
        cout << message << endl;
    }
}