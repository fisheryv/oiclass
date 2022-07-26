#include <iostream>

using namespace std;

int main()
{
    int h, m, s;
    cin >> h >> m >> s;
    s += (h*3600 + m*60);
    cout << s << endl;
    return 0;
}