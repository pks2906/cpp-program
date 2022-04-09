#include <iostream>
#include <math.h>

using namespace std;

class Triangle
{
private:
    double a, b, c;

public:
    Triangle(double a, double b, double c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    double area()
    {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double perimeter()
    {
        return a + b + c;
    }
};
// The start point of the program
int main()
{
    double a, b, c;
    cout << "Ente a: ";
    cin >> a;
    cout << "Ente b: ";
    cin >> b;
    cout << "Ente c: ";
    cin >> c;

    Triangle triangle(a, b, c);

    cout << "Area: " << triangle.area() << "\n";
    cout << "Perimeter: " << triangle.perimeter() << "\n";

    system("pause");
    return 0;
}