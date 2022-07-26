#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int s = (a + (a+c*2))*b/2;
    cout << s << endl;
    return 0;
}