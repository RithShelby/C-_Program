#include <iostream>
using namespace std;
template <typename T>
T Max(T a, T b)
{
    T m;
    if (a > b)
    {
        m = a;
    }
    else
    {
        m = b;
    }
    return m;
}
int main()
{
    cout << "Max : " << Max<int>(20, 30) << endl;
    cout << "Max : " << Max<float>(1.3, 1.4) << endl;
}