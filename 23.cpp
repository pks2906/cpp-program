#include <iostream>
using namespace std;
inline int series(int num)
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
    int n;
    cout << "enter a number";
    cin >> n;
    series(n);
}
