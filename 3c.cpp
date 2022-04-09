#include <iostream>
using namespace std;
class Area
{
public:
    int len, width;
    void getArea()
    {
        cout << "Enter the length: ";
        cin >> len;
        cout << "Enter width: ";
        cin >> width;
    }
    void returnArea()
    {
        cout << "Area is: " << len * width;
    }
};
int main()
{
    Area A;
    A.getArea();
    A.returnArea();
}