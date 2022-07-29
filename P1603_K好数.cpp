#include <iostream>

using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        int a = i;
        while (a > 0)
        {
            int num = a % 10;
            if (num > k)
            {
                break;
            }
            a /= 10;
        }
        if (a == 0)
            count++;
    }
    cout << count << endl;
    return 0;
}