#include <iostream>
using namespace std;

bool test(int temp1, int temp2)
{
    return temp1 < 0 && temp2 > 100 || temp2 < 0 && temp1 > 100;
}

int main()
{
    cout << test(120, -1) << endl;
    cout << test(-1, 120) << endl;
    cout << test(2, 120) << endl;
    return 0;
}