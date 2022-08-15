#include <iostream>

using namespace std;

int main()
{
	int n, a, b, maxa = -1, maxb = -1, mina = 100001, minb = 100001;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		if (a > maxa)
		{
			maxa = a;
		}
		if (a < mina)
		{
			mina = a;
		}
		if (b > maxb)
		{
			maxb = b;
		}
		if (b < minb)
		{
			minb = b;
		}
	}
	long long differencea = maxa - mina;
	long long differenceb = maxb - minb;
	if (differencea > differenceb)
	{
		cout << differencea * differencea;
	}
	else
	{
		cout << differenceb * differenceb;
	}
	return 0;
}