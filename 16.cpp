#include <iostream>
using namespace std;

int test(int x, int y)
{
    if (x == y)
    {
        return 0;
    }
    else if ((x % 7 == y % 7 && x < y) || x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    cout << test(11, 21) << endl;
    cout << test(11, 20) << endl;
    cout << test(10, 10) << endl;
    return 0;
}