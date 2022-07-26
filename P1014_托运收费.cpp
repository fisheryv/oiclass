#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double n;
    cin >> n;
    double f = 2.5;
    if (n > 10)
    {
        f += (n-10) * 1.5;
    }
    printf("%.2lf", f);
    return 0;
}