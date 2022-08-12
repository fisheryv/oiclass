#include <iostream>

using namespace std;

int main()
{
    int n, num, sum = 0, rem;
    cin >> n; 
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        sum += num;
    }
    rem = sum % n;
    if (rem == 0)
    {
        rem = n;
    }
    cout << rem;
}