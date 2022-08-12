#include <iostream>

using namespace std;

int main()
{
    long long v;
    cin >> v;
    if (v < 7960)
    {
        cout << v << " " << 0;
    }
    else if (v < 11200)
    {
        cout << v << " " << 1;
    }
    else if (v < 16700)
    {
        cout << v << " " << 12;
    }
    else if (v < 115000)
    {
        cout << v << " " << 123;
    }
    else if (v < 2000000)
    {
        cout << v << " " << 1234;
    }
    else
    {
        cout << v << " " << 12345;
    }
    return 0;
}