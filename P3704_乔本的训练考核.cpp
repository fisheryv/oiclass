#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a >= 90)
    {
        cout << "PERFECT";
    }
    else if(a >= 80)
    {
        cout << "EXCELLENT";
    }
    else if(a >= 70)
    {
        cout << "GOOD";
    }
    else if(a >= 60)
    {
        cout << "PASS";
    }
    else
    {
        cout << "FAIL";
    }
    return 0;
}