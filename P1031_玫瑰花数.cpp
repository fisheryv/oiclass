#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    for (int i = 1000; i < 10000; i++)
    {
        a = i / 1000;
        b = i / 100 % 10;
        c = i / 10 % 10;
        d = i % 10;
        if (a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}