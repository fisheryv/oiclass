#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        n /= 2;
    }
    else{
        n *= 2;
    }
    cout << n << endl;
    return 0;
}