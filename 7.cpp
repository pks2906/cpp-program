#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    string joiningyear;
    string salary;
    string address;

    Employee(string n, string j, string s, string a)
    {
        name = n;
        joiningyear = j;
        salary = s;
        address = a;
    }
    void print()
    {
        cout << name << "\t" << joiningyear << "\t\t\t" << address << endl;
    }
};
int main()
{
    Employee e1("Robert", "1994", "100000", "64C- WallStreat");
    Employee e2("Sam", "2000", "200000", "68-D WallStreat");

    cout << "Name\t Year of joining\t Address" << endl;
    e1.print();
    e2.print();

    return 0;
}