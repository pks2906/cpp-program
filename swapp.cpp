#include <iostream>

using namespace std;

template <class T>

void swapp(T &a, T &b)
{

    T temp = a;

    a = b;

    b = temp;
}

int main()
{

    int x = 10, y = 20;

    cout << "The Value of x Before swapping is :" << x << endl;

    cout << "The Value of y Before swapping is :" << y << endl;

    swapp(x, y);

    cout << "The Value of x After swapping is :" << x << endl;

    cout << "The Value of y After swapping is :" << y << endl;

    return 0;
}