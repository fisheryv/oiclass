#include <iostream>

using namespace std;

int main()
{
    int n, num1 = 0, num2 = 1, now = 1;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        now = num1 + num2;
        num1 = num2;
        num2 = now;
    }
    cout << now;
    return 0;
}