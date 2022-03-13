/*
虽然说每次最多可以同时烤k块面包，但是只能烤好这些面包的一个面。小s要想吃上好吃的面包，就需要把面包的两面都烤好。
小s同学一共想吃n块烤面包，但是小s每天都有好多景点需要游览，她不能在早餐上耽误很长时间，因此，小s同学希望你能告诉她最少需要使用几次烤面包机就可以烤好n块面包。
输入数据仅有一行包含两个用空格隔开的正整数n和k(n, k <=10)，n表示小s同学一共要烤n块面包，k表示宾馆的烤面包机一次最多可以同时烤好k块面包的一个面。
输出格式
仅有一行包含一个整数，表示小s同学至少要用多少次烤面包机。
*/

#include<iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	if (n < k)
		cout << 2 << endl;
	else if (n * 2 % k == 0)
		cout << n * 2 / k << endl;
	else
		cout << n * 2 / k + 1 << endl;
	cin >> k;
	return 0;
}
