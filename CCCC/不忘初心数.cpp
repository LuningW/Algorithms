#include<iostream>

using namespace std;
int com(int k, int b)
{
	int s = 0;
	int x = k * b;
	while (x != 0)
	{
		int m = 0;
		m = x % 10;
		s += m;
		x = x - m;
		x = x / 10;
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	int tmp1, tmp2;

	while (n--)
	{
		int k;
		cin >> k;

		tmp1 = com(k, 2);
		tmp2 = tmp1;
		for (int i = 3;i <= 9;i++)
		{
			if (tmp1 != com(k, i))
			{
				tmp1 = com(k, i);
				cout << 'NO' << endl;
				break;
			}
		}

	}
	if (tmp2 == tmp1)
		cout << 'tmp2' << endl;
	cin >> n;

	return 0;
}
