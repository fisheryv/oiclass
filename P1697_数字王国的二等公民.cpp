#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 2; i <= ceil(sqrt(n)); i++)
    {
        if (n % i == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}