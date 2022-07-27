#include <iostream>

using namespace std;

int main()
{
    int n, num, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        if (num != i)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}