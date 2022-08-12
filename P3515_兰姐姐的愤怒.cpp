#include <iostream>

using namespace std;

int main()
{
    long long x, a = 1;
    cin >> x;
    while (a <= x)
    {
        a *= 2;
    }
    cout << a;
}