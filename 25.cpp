#include <iostream>
using namespace std;
struct employee
{
    int empID;
    char name[50];
    int salary;
    char department[50];
};
int main()
{
    struct employee emp[3] = {{1, "Prashant", 20000, "Finance"}, {2, "Adil", 50000, "HR"}, {3, "Manas", 15000, "Technical"}};
    cout << "The employee information is given as follows:" << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Employee ID: " << emp[i].empID << endl;
        cout << "Name: " << emp[i].name << endl;
        cout << "Salary: " << emp[i].salary << endl;
        cout << "Department: " << emp[i].department << endl;
        cout << endl;
    }
    return 0;
}
