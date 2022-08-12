#include <iostream>

using namespace std;

int main()
{
    int n, t, num, count = 0;
    cin >> n >> t;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        if (num < t)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}