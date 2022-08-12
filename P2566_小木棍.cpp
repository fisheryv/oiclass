#include <iostream>

using namespace std;

int main()
{
    int a, b, c, t;
    cin >> a >> b >> c;
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a > c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b > c)
    {
        t = b;
        b = c;
        c = t;
    }
    cout << a << b << c << endl;
    cout << a << c << b << endl;
    cout << b << a << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;
    cout << c << b << a << endl;
    return 0;
}