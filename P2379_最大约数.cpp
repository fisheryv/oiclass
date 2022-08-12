#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long n;
    cin >> n;
    for (int i = 2; i<=ceil(sqrt(n)); i++)
    {
        if (n % i == 0)
        {
            cout << n / i << endl;
            break;
        }
    }
    return 0;
}