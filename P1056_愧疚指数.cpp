#include <iostream>
#include <cstdio>

using namespace std;

int a[200001], b[200001], s[4];
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = n; i > 0; i--)
    {
        count = 0;
        s[a[i]]++;
        for (int j = 1; j < a[i]; j++)
        {
            count += s[j];
        }
        b[i] = count;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}