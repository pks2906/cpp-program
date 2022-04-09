#include <iostream>
using namespace std;

class box
{
    double length, width, height;
    double volume;

public:
    box(double a, double b, double c);
    void vol();
};

box::box(double a, double b, double c)
{
    length = a;
    width = b;
    height = c;
    volume = length * width * height;
}

void box::vol()
{
    cout << "\nDimensions of Box are :: \n";
    cout << "\nLength of Box :: " << length << "\n";
    cout << "\nWidth of Box :: " << width << "\n";
    cout << "\nHeight of Box :: " << height << "\n";
    cout << "\nVolume of Box :: " << volume << "\n";
}

int main()
{
    box x(2.4, 5.7, 2.1), y(3.3, 4.4, 5.5);

    x.vol();
    y.vol();

    return 0;
}