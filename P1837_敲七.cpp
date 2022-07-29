#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 7 == 0)
        {
            cout << i << endl;
            continue;
        }
        int a = i;
        while (a > 0)
        {
            int num = a % 10;
            if (num == 7)
            {
                cout << i << endl;
                break;
            }
            a /= 10;
        }
    }
    return 0;
}