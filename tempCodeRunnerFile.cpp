#include <iostream>
#include <string>

using namespace std;

class Student
{
    string name;
    int rollno;
    string phone;
    string address;

public:
    Student() {}
    Student(string _name, int _rollno, string _phone, string _address)
        : name(_name), rollno(_rollno), phone(_phone), address(_address) {}
    void AssignAtr(string _name, int _rollno, string _phone, string _address)
    {
        name = _name;
        rollno = _rollno;
        phone = _phone;
        address = _address;
    }
    void Print()
    {
        cout << "\nStudent`s name is\t" << name
             << "\nRoll number is\t\t" << rollno
             << "\nPhone is\t\t" << phone
             << "\nAddress is\t\t" << address;
    }
};

int main()
{

    Student s("Sam", 12, "12345678", "Central avenue, 28");
    Student j;
    j.AssignAtr("John", 10, "98765432", "Apple street, 17");
    cout << "    First student";
    s.Print();
    cout << "\n    Second student";
    j.Print();
}