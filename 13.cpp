#include <iostream>

using namespace std;

bool test(int x, int y)
{
    return x == 5 || y == 5 || x + y == 5 || abs(x - y) == 5;
}

int main()
{
    cout << test(5, 4) << endl;
    cout << test(4, 3) << endl;
    cout << test(1, 4) << endl;
    return 0;
}