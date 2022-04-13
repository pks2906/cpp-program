#include <iostream>

using namespace std;

int main() 
{
    int N,min,max;
    cin >> N;
    min = N;
    max = N;

    int i,x;
    for (i = 1; i <= N; ++i) {
        cin >> x;

        if ( x < min ) {
            min = x;
        }
        if (x > max) {
            max = x;
        }
    }
    cout << min <<" "<< max;
    return 0;
}