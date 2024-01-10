#include <iostream>
using namespace std;
class Student
{
protected:
    long id;
    string name;
    string sex;

public:
    virtual void Input()
    {
        cout << "Input ID : ";
        cin >> id;
        cout << "Input Name : ";
        cin >> name;
        fflush(stdin);
        cout << "Input Sex :";
        cin >> sex;
    }
    virtual void print()
    {
        cout << id << "\t" << name << "\t" << sex;
    }
};
class Math : public Student
{
protected:
    int eng, math;

public:
    void Input()
    {
        Student::Input();
        cout << "English :";
        cin >> eng;
        cout << "Math :";
        cin >> math;
    }
    float avg()
    {
        return (eng + math) / 2.0f;
    }
    void print()
    {
        cout << id << "\t" << name << "\t" << sex << "\t" << eng << "\t" << math << "\t" << avg() << "%";
    }
};
class IT : public Student
{
protected:
    int eng, pro, fun;

public:
    void Input()
    {
        Student::Input();
        cout << "English : ";
        cin >> eng;
        cout << "Program : ";
        cin >> pro;
        cout << "Fundamental : ";
        cin >> fun;
    }
    float avg()
    {
        return (eng + pro + fun) / 3.0f;
    }
    void print()
    {
        cout << id << "\t" << name << "\t" << sex << "\t" << eng << "\t" << pro << "\t" << fun << "\t" << avg() << "%";
    }
};