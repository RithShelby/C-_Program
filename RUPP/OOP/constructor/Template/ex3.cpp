#include <iostream>
using namespace std;

template <typename T>
class Arr
{
private:
    T *ptr;
    int size;

public:
    Arr() : ptr(nullptr), size(0) {}

    Arr(T arr[], int s) : size(s)
    {
        ptr = new T[size];
        for (int i = 0; i < size; i++)
        {
            ptr[i] = arr[i];
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << " " << ptr[i];
        }
        cout << endl;
    }

    void setData(T arr[], int s)
    {
        if (ptr != nullptr)
        {
            delete[] ptr;
        }
        size = s;
        ptr = new T[size];
        for (int i = 0; i < size; i++)
        {
            ptr[i] = arr[i];
        }
    }

    void Input()
    {
        cout << "Input size: ";
        cin >> size;
        ptr = new T[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Element " << i + 1 << ": ";
            cin >> ptr[i];
        }
    }

    void search()
    {
        T tmp;
        cout << "Search: ";
        cin >> tmp;
        for (int i = 0; i < size; i++)
        {
            if (ptr[i] == tmp)
            {
                cout << ptr[i] << "\t";
            }
        }
        cout << endl;
    }

    void update()
    {
        T tmp, tmp2;
        cout << "Search: ";
        cin >> tmp;
        cout << "Update: ";
        cin >> tmp2;
        for (int i = 0; i < size; i++)
        {
            if (ptr[i] == tmp)
            {
                ptr[i] = tmp2;
            }
        }
        cout << endl;
    }

    void update(int index)
    {
        T tmp2;
        cout << "Update To: ";
        cin >> tmp2;
        if (index >= 0 && index < size)
        {
            ptr[index] = tmp2;
        }
        else
        {
            cout << "Invalid index." << endl;
        }
    }

    ~Arr()
    {
        delete[] ptr;
    }
};

int main()
{
    Arr<string> obj;
    int i;
    obj.Input();
    cout << "Original array: ";
    obj.print();
    cout << "Update at index: ";
    cin >> i;
    obj.update(i);
    cout << "Updated array: ";
    obj.print();

    return 0;
}
