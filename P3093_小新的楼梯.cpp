#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << m << endl;
    for (int i = 1; i < n; i++)
    {
        cout << " ";
    }
    cout << "X" << endl;
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}