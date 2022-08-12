#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if ((a + b + c) / 3 <= 8.3)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}