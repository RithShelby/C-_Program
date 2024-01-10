#include <iostream>
using namespace std;
#include "Student.h"
int main()
{
    Student *st[2];
    Math m[2];
    IT it[2];
    st[0] = &m[0];
    st[1] = &it[0];
    for (int i = 0; i < 2; i++)
    {
        st[i]->Input();
    }
    for (int i = 0; i < 2; i++)
    {
        st[i]->print();
        cout << endl;
    }
}