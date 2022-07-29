#include <iostream>

using namespace std;

int main()
{
    int n, start = 1, num = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int x = start; x < num; x++)
        {
            cout << x % 10;
        }
        for (int y = num; y >= start; y--)
        {
            cout << y % 10;
        }
        cout << endl;
        start++;
        num += 2;
    }
}