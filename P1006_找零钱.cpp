#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    if (a < b)
    {
        cout << "Not Enough!" << endl;
    }
    else
    {
        cout << (a - b) << endl;
    }
    return 0;
}