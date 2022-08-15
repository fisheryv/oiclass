#include <iostream>

using namespace std;

int main()
{
	unsigned long long n, p, s = 1, res = 0;
	cin >> n >> p;
	for (unsigned long long i = 1; i <= n; i++)
	{
		s = (s * i) % p;
        res = (res + s) % p;
        if (s == 0)
            break;
	}
	cout << res;
	return 0;
}