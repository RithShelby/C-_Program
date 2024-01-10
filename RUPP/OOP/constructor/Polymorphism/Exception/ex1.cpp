#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Input Age :";
    cin >> age;
    try
    {
        if (age >= 18)
        {
            cout << "Access granted you are old enough!";
        }
        else
        {
            throw(age);
        }
    }
    catch (int myNum)
    {
        cout << "Access denied you are not old enough!" << endl;
        cout << "Age: " << myNum;
    }

    return 0;
}
