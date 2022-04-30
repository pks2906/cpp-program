#include <iostream>

using namespace std;

class Demo
{
    int a;
    int b;
    int c;
    int d;

public:
    void setdata(int x, int y, int z, int w)
    {
        a = x;
        b = y;
        c = z;
        d = w;
    }
    void showdata()
    {
        int avg;
        if ((a < b) && (b < c) && (c < d))
        {
            printf("\nLargest: %d\n", d);
            printf("\nSmallest: %d\n", a);
            avg = (b + c) / 2;
            cout << "avg number:" << avg;
        }
        else if ((d < c) && (c < b) && (b < a))
        {
            printf("\nLargest: %d\n", a);
            printf("\nSmallest: %d\n", d);
            avg = (b + c) / 2;
            cout << "avg number:" << avg;
        }
        else if ((c < d || c < a) && (a < d || d < a) && (a < b || d < b))
        {
            printf("\nLargest: %d\n", b);
            printf("\nSmallest: %d\n", c);
            avg = (a + d) / 2;
            cout << "avg number:" << avg;
        }
        else if ((b < a || b < d) && (a < d || d < a) && (d < c || a < c))
        {
            printf("\nLargest: %d\n", c);
            printf("\nSmallest: %d\n", b);
            avg = (a + d) / 2;
            cout << "avg number:" << avg;
        }
    }
};
int main()
{
    Demo d1;
    d1.setdata(4, 6, 7, 9);
    Demo d2 = d1;
    d2.showdata();
    return 0;
}
