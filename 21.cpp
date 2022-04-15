#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float s = 0.0;
    cout << "\n\n Display n terms of harmonic series and their sum:\n";
    cout << " The harmonic series: 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms\n";
    cout << "-----------------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i < n)
        {
            cout << "1/" << i << " + ";
            s += 1 / (float)i;
        }
        if (i == n)
        {
            cout << "1/" << i;
            s += 1 / (float)i;
        }
    }
    cout << "\n The sum of the series upto " << n << " terms: " << s <<

        endl;
}