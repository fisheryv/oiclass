#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int cm;
    cin >> cm;
    double inch = cm/2.54;
    printf("%.2f", inch);
    return 0;
}