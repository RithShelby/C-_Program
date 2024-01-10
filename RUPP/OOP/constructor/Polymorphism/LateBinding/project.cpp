#include <iostream>
using namespace std;
#include "Student.h"
int main()
{
    Student *s[20];
    Math m[20];
    IT it[20];
    s[0] = &m[0];
    s[0] = &it[0];
    for (int i = 0; i < 2; i++)
    {
        s[i]->Input();
    }
    for (int i = 0; i < 2; i++)
    {
        s[i]->print();
        cout << endl;
    }
    //     int ch;
    //     int ns = 0, nm = 0, ni = 0;
    // A:
    //     cout << "1.Add Math student\n";
    //     cout << "2.Add IT student\n";
    //     cout << "3.All student\n";
    //     cout << "4.IT Student List \n";
    //     cout << "5.Math Student List \n";
    //     cout << "Select : ";
    //     cin >> ch;
    //     switch (ch)
    //     {
    //     case 1:
    //         s[ns] = &m[nm];
    //         s[ns]->Input();
    //         ns++;
    //         nm++;
    //         goto A;
    //     case 2:
    //         s[ns] = &it[nm];
    //         s[ns]->Input();
    //         ns++;
    //         nm++;
    //         goto A;
    //         break;
    //     case 3:
    //         int i;
    //         for (i = 0; i < ns; i++)
    //         {
    //             s[i]->print();
    //             cout << endl;
    //         }
    //         goto A;
    //     case 4:

    //         for (i = 0; i < ni; i++)
    //         {
    //             s[i]->print();
    //             cout << endl;
    //         }
    //         goto A;
    //     case 5:

    //         for (i = 0; i < nm; i++)
    //         {
    //             s[i]->print();
    //             cout << endl;
    //         }
    //         goto A;
    //     }
}
