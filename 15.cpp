#include <iostream>

using namespace std;

bool test(int x, int y, int z, bool flag)
{
    return flag ? x <= y && y <= z : x < y && y < z;
}

int main()
{
    cout << test(1, 2, 3, false) << endl;
    cout << test(1, 2, 3, true) << endl;
    cout << test(10, 2, 30, false) << endl;
    cout << test(10, 10, 30, true) << endl;
    return 0;
}