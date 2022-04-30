#include <iostream>
using namespace std;
int fib(int num = 0)
{
    int a = 0, b = 1, t, j;
    cout << "the fibonacci series is " << a << b;
    for (j = 1; j <= num; j++)
    {
        t = a + b;
        cout << t;
        a = b;
        b = t;
    }
    cout << "\n";
}
int main()
{
    cout << fib(6);
    return 0;
}
