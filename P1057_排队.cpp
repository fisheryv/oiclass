#include <iostream>
#include <cstdio>

using namespace std;

int a[121];
int main()
{
    int n, num, count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        a[num]++;
        count = 0;
        for (int j = num + 1; j < 121; j++)
        {
            count += a[j];
        }
        printf("%d ", count);
    }
    return 0;
}