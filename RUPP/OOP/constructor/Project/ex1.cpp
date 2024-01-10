#include <iostream>
using namespace std;
class Person
{
private:
    int id;
    float hourRate, hourWork;
    string name;

public:
    Person() {}
    Person(int ID, float HourRate, float Hourwork, string Name)
    {
        id = ID;
        hourRate = HourRate;
        hourWork = Hourwork;
        name = Name;
    }
    void setData(int ID, float HourRate, float Hourwork, string Name)
    {
        id = ID;
        hourRate = HourRate;
        hourWork = Hourwork;
        name = Name;
    }
    void setID(int ID)
    {
        id = ID;
    }
    void setHourRate(float HourRate)
    {
        hourRate = HourRate;
    }
    void setHourWork(float Hourwork)
    {
        hourWork = Hourwork;
    }
    void setName(string Name)
    {
        name = Name;
    }
    int getID()
    {
        return id;
    }
    // represents the hourly rate of pay for 1 hour of work
    float getHourRate()
    {
        return hourRate;
    }
    // number of hours worked per week.
    float getHourWork()
    {
        return hourWork;
    }
    string getName()
    {
        return name;
    }
    void Input()
    {
        cout << "Input ID : ";
        cin >> id;
        cout << "Input HourRate : ";
        cin >> hourRate;
        cout << "Input HourWeek : ";
        cin >> hourWork;
        cout << "Input Name : ";
        cin >> name;
    }
    float TotalDeductions()
    {
        return 100.0;
    }
    float GrossPay()
    {
        // Gross Pay=Hourly Rate×Number of Hours Worked
        return (hourRate * hourWork);
    }
    float SSTax()
    {
        // S.S Tax=0.062×Gross Pay
        return (GrossPay() * 0.062);
    }
    float NetPay()
    {
        // Net Pay=Gross Pay−Total Deductions
        return (GrossPay() - TotalDeductions());
    }
    void Output()
    {
        cout << "ID\tHourRate\tHourWeek\tGrossPay\tSS.Tax\tNetPay\n";
        cout << id << "\t" << hourRate
             << "$"
             << "\t"
             << "\t" << hourWork << "\t\t" << GrossPay() << "$"
             << "\t\t" << SSTax() << "$"
             << "\t" << NetPay() << "$"
             << "\n";
    }
};
int main()
{
    Person obj;
    obj.setData(1, 20, 35, "Rith");
    obj.Output();
}