#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (abs(a - b) > 2)
    {
        cout << "No";
    }
    else
    {
        if (a == 0 || b == 0)
        {
            cout << "No";
        }
        else if (a >= b + 1 || b >= a + 1)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    return 0;
}