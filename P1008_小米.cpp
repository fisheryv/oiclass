#include <iostream>

using namespace std;

int main() {
    int f, m, g;
    cin >> f >> m >> g;
    int h = f + m;
    if (g == 1)
    {
        h += 13;
    }
    else
    {
        h -= 13;
    }
    h /= 2;
    cout << h << endl;
    return 0;
}