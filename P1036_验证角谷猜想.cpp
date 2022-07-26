#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool has_output = false;
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            if (has_output)
            {
                cout << " ";
            }
            cout << n;
            n = n*3+1;
            has_output = true;
        }
    }
    if (!has_output)
    {
        cout << "No number can be output!";
    }
    return 0;
}