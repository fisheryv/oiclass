#include <iostream>

using namespace std;

int main()
{
    int n, num1, num2;
    cin >> n;
    cin >> num1;
    for (int i = 1; i < n; i++)
    {
        cin >> num2;
        while (num1 % num2 != 0)
        {
            int rem = num1 % num2;
            num1 = num2;
            num2 = rem;
        }
        num1 = num2;
    }
    cout << num1;
    return 0;
}