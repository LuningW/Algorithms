/*
有N个整数，请求出从A个数到第B个数之间的所有数的和。

第一行有一个数N（3≤N≤300）其中N为数的个数

第二行有N个整数

第三行有两个整数A、B，A为这N个数中的第A个数，B为这N个数中的第B个数。（A≤B）

仅一个数，即从第A个数开始至第B个数为止的所有数的和。
*/

#include<iostream>
using namespace std;

const int MAX = 305;

int main()
{
	int n, sum = 0;
	int num[MAX];
	int r, l;

	cin >> n;
	for(int j=0;j<n;j++)
		cin >> num[j];
	cin >> l >> r;

	for (int i = l - 1;i <= r - 1;i++)
		sum = sum + num[i];

	cout << sum<<endl;;


	return 0;
}


