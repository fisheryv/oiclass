#include <iostream>

using namespace std;

int main()
{
    int n, num, count = 0, c = 0;
    cin >> n;
    cout << 4 * n << " ";
    for (int i = n; i > 0; i--)
    {
        num = 2008 * i + c;
        c = num / 10000;
        for (int i = 0; i < 4; i++)
        {
            int a = num % 10;
            if (a == 0)
            {
                count++;
            }
            num /= 10;
        }
    }
    cout << count;
    return 0;
}
