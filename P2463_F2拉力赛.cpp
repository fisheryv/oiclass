#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, d, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
		if(i >= 2)
        {
			if((a > b && c < d) || (a < b && c > d))
            {
                count++;
            }
		}
		c = a;
		d = b;
	}
    if (a > b)
    {
        cout << "peiqi" << endl;
    }
    else
    {
        cout << "aimili" << endl;
    }
    cout << count;
    return 0;
}