#include <iostream>

using namespace std;

class Employee
{
    double salary;
    int no_of_hours;

public:
    Employee() {}
    void getinfo()
    {
        cout << "Please, enter the salary of employee: ";
        cin >> salary;
        cout << "Please, enter the number of hours: ";
        cin >> no_of_hours;
    }
    void AddSal()
    {
        if (salary < 500)
            salary += 10;
    }
    void AddWork()
    {
        if (no_of_hours > 6)
            salary += 5;
    }
    void DisplaySalary()
    {
        cout << salary;
    }
};

int main()
{
    int num;
    cout << "Enter the number of employees: ";
    cin >> num;
    Employee *emp = new Employee[num];
    for (int i = 0; i < num; i++)
    {
        emp[i].getinfo();
        emp[i].AddSal();
        emp[i].AddWork();
    }
    for (int i = 0; i < num; i++)
    {
        cout << "\nThe final salary of employee " << i << " is:";
        emp[i].DisplaySalary();
    }
}
