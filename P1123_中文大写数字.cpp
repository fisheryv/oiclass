#include <iostream>

using namespace std;

string map_sp(int c)
{
	switch (c)
	{
		case 2:
			return "万";
		case 3:
			return "亿";
		default:
			return "";
	}
}

string map_unit(int c) 
{
	switch (c) 
	{
		case 2:
			return "拾";
		case 3:
			return "佰";
		case 4:
			return "仟";
		default:
			return "";
	}
}

string map_number(int n) 
{
	switch (n) 
	{
		case 0:
			return "零";
		case 1:
			return "壹";
		case 2:
			return "贰";
		case 3:
			return "叁";
		case 4:
			return "肆";
		case 5:
			return "伍";
		case 6:
			return "陆";
		case 7:
			return "柒";
		case 8:
			return "捌";
		case 9:
			return "玖";
		default:
			return "";
	}
}

string to_chinese(int p) {
	string s = "";
	int c = 0;
	bool skip = true;
	bool has_zero = false;
	while (p > 0) {
		c++;
		int k = p % 10;
        p /= 10;
		if (k == 0) {
			if (skip || has_zero)
				continue;
			has_zero = true;
		} else {
			skip = false;
		}
		s = map_number(k) + (k==0 ? "" : map_unit(c)) + s;
	}
	return s;
}

int main() {
	long n;
	while (true) {
		string res = "";
		cin >> n;
		if (n == -1) 
		{
			break;
		}
		else if (n == 0)
		{
			res = "零";
		}
		else
		{
			int c = 0;
			while(n > 0)
			{
				c++;
				int p = n % 10000;
				string s = to_chinese(p);
				if (s == "")
				{
					if(res != "")
					{
						res = "零" + res;
					}
				}
				else
				{
					res = s + map_sp(c) + res;
				}
				n /= 10000;
				if (n > 0 && p < 1000 && p != 0)
				{
					res = "零" + res;
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}