#include <iostream>

using namespace std;

int main()
{
    int s;
    cin >> s;
    int a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    s -= (a1 + a2 + a3 + a4 + a5);
    cout << s << endl;
    return 0;
}