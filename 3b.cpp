#include <iostream>

using namespace std;

class area
{
public:
    int length = 0, breadth = 0;
    void setdim(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int getarea()
    {
        return length * breadth;
    }
};

int main()
{
    area a1;
    a1.setdim(3, 5);
    cout << a1.getarea() << endl;

    return 0;
}