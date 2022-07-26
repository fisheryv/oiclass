#include <iostream>

using namespace std;

int main() {
    int h1;
    cin >> h1;
    int h2 = h1 + 12;
    if (h2 >= 24)
    {
        h2 -= 24;
    }
    cout << h2 << endl;
    return 0;
}