#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x, sum, term, fct, y, j, m;
    int i, n;
    y = 2;

    cout << "\n\n Find the sum of the series 1 - X^2/2! + X^4/4!-....:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Input the value of X: ";
    cin >> x;
    cout << " Input the value for nth term: ";
    cin >> n;
    sum = 1;
    term = 1;
    cout << " term 1 value is: " << term << endl;
    for (i = 1; i < n; i++)
    {
        fct = 1;
        for (j = 1; j <= y; j++)
        {
            fct = fct * j;
        }
        term = term * (-1);
        m = pow(x, y) / fct;
        m = m * term;
        cout << " term " << i + 1 << " value is: " << m << endl;
        sum = sum + m;
        y += 2;
    }
    cout << " The sum of the above series is: " << sum << endl;
}
