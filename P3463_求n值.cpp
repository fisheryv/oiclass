#include <iostream>

using namespace std;

int main()
{
    int k, n = 0, sum = 0;
    cin >> k;
    while (sum < k)
    {
        n++;
        sum += n;
    }
    cout << n;
}