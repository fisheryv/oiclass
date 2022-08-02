#include <iostream>
#include <cstring>

using namespace std;

bool a[10001];
int main()
{
    int n, num, count = 0;
    cin >> n;
    while (n--)
    {
        cin >> num;
        memset(a, false, sizeof(a));
        count = 0;
        for (int i = 1; i <= num; i++)
        {
            for (int j = 1; j <= num; j++)
            {
                if (j % i == 0)
                {
                    a[j] = !a[j];
                }
            }
        }
        for (int i = 1; i <= num; i++)
        {
            if (a[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}