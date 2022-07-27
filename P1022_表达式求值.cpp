#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    double sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i += 2)
    {
        sum += 1.0 / i - 1.0 / (i + 1);
    }
    printf("%.8lf", sum);
    return 0;
}