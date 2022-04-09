#include <iostream>

using namespace std;

class AddDistance
{
private:
    int feet;
    int inch;

public:
    void setDistance();
    void getDistance();
    AddDistance addDistance(AddDistance d);
};

// function to show print distance
void AddDistance::setDistance()
{
    cout << " feet: ";
    cin >> feet;
    cout << "inches: ";
    cin >> inch;
}

// function to get distance from user
void AddDistance::getDistance()
{
    cout << "feet: " << feet;
    cout << " inches: " << inch;
}

// function to add 2 distances
AddDistance AddDistance::addDistance(AddDistance d)
{
    AddDistance dist;

    dist.feet = feet + d.feet;
    dist.inch = inch + d.inch;

    if (dist.inch >= 12)
    {
        dist.feet++;
        dist.inch -= 12;
    }
    return dist;
}

int main()
{
    AddDistance d1, d2, d3;

    // taking the two distances as input from user
    cout << "Enter length of Distance 1: " << endl;
    d1.setDistance();

    cout << "Enter length of Distance 2: " << endl;
    d2.setDistance();

    // adding the distances
    d3 = d1.addDistance(d2);

    // displaying resultant distance

    cout << "Sum of Distance 1 and Distance 2:" << endl;
    d3.getDistance();
    return 0;
}