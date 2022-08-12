#include<iostream>

using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b;
    if (b / 100 != 0)
    {
        k = 1000;
    }
    else if (b / 10 != 0)
    {
        k = 100;
    }
    else
    {
        k = 10;
    }
    cout << a * k + b;
}