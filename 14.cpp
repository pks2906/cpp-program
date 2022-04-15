#include <iostream>

using namespace std;

bool test(int x, int y, int z)
{
    return x == y + z || y == x + z || z == x + y;
}

int main()
{
    cout << test(1, 2, 3) << endl;
    cout << test(4, 5, 6) << endl;
    cout << test(-1, 1, 0) << endl;
    return 0;
}