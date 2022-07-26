#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int type1 = 8; // 8个角块
    int type2 = (n-2) * 12; // 12个棱，没个棱-2个角块，剩下的是棱块
    int type3 = (n-2) * (n-2) * 6; // 6个面，每个面除最外面一圈的棱块和角块，剩下的都是面块
    cout << type1 << endl << type2 << endl << type3;
    return 0;
}