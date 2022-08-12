#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c == 0)
    {
        cout << 0;
    }
    else if (a >= b)
    {
        cout << -1;
    }
    else
    {
        cout << c / (b - a);
    }
    return 0;
}