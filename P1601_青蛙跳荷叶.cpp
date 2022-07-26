#include <iostream>

using namespace std;

int main()
{
    int a, k;
    cin >> a >> k;
    int result = (a+1) * k % 8;
    cout << result << endl;
    return 0;
}