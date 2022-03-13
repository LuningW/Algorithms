/*
在一个操场上一排地摆放着N堆石子。现要将石子有次序地合并成一堆。规定每次只能选相邻的2堆石子合并成新的一堆，并将新的一堆石子数记为该次合并的得分。

设计一个程序，计算出将N堆石子合并成一堆的最小得分。

输入格式
第一行为一个正整数N (2≤N≤100)；

以下N行,每行一个正整数，小于10000，分别表示第i堆石子的个数（1≤i≤N）。
输出：
为一个正整数，即最小得分。
*/

#include<iostream>
#include<algorithm>

using namespace std;

int comp(int a, int b)
{
	return a < b ? a : b;
}
int main()
{
	int n;
	int num[10001];
	int a[101][101];
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> num[i];
		num[i] = num[i - 1] + num[i];
	}
	for (int j = 1;j <= n;j++)
	{
		for (int k = 1;k <=n;k++)
		{
			a[j][k] = 10000001;
		}
	}
	for (int i = 1;i <=n;i++)
		a[i][i] = 0;
	for (int j = n - 1;j > 0;j--)
	{
		for (int k = j + 1;k <= n;k++)
		{
			for (int l = j;l <= k - 1;l++)
				a[j][k] = comp(a[j][k],a[j][l]+a[l+1][k]+num[k]-num[j-1]);
		}
	}

	cout << a[1][n];

	return 0;
}
