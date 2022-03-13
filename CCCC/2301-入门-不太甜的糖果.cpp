/*
给定一排长度为n的糖果串，每个糖果有一个甜度，求出一个最短的糖果串使得它的甜度之和大于等于m。
输入：第一行包含两个数n和m，第二行有n个数。
输出：输出一行，包含一个数，即最短的糖果串的长度。如果找不到这样的糖果串，输出0；
*/
#include<iostream>
#include<algorithm>


using namespace std;
const int MAX = 100;
int main()
{
	int n, m,sum=0,num=0;
	cin >> n>>m;
	int a[MAX] = {0};
	for (int i = 0;i < n;i++)
		cin >> a[i];
	sort(a,a+n);
	for (int j = n - 1;j >= 0;j--)
	{
		sum = sum + a[j];
		if (sum < m)num++;
		else
		{
			num++;
			break;
		}
	}
	if (sum<m)cout<<0<<endl;
	else cout << num << endl;

	cin >> n;
	return 0;
}
