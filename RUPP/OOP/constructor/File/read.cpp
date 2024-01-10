#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char file[20];
    cout << "Read file: ";
    cin >> file;

    ifstream myfile(file);
    string line;

    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << "\n";
        }
        myfile.close();
    }
    else
    {
        cout << "Unable to open file: " << file << "\n";
    }

    return 0;
}
