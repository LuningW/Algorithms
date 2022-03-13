/*
乐乐最近喜欢研究回文数，假设一个数从左到右读跟从右到左读的结果是一样的，那么我们说这个数是一个回文数。 如果一个数在十进制下是回文的，我们说这个数是一重回文数，如果一个数在十进制和二进制下是回文的，我们说这个数是二重回文数，如果一个数在三种进制下是回文的，我们说这个数是三重回文数……。现在我们用数字0..9，字母‘A’..‘Z’分别代表数字0..35（即10用A表示，11用B表示……，35用Z表示），任意给出一个10进制数，乐乐想知道它在2至36进制里是多少重的回文数。
输入样例：

50

输出样例：

3

7

9

24

样例解释:

50对应的7进制数为101，9进制数为55，24进制数为22。
*/

#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
char len[10000];
void trans(long long n,int i)
{
	int j=0, k=0;
	while (n > 0)
	{
		j = n % i;
		if (j < 10)
			len[k] = j + '0';
		else
			len[k] = j - 10 + 'A';
		k++;
		n = n / i;
	}
}
bool ishuiwen(char a[])
{
	int i = 0;
	int lenth = strlen(a);
	int j = lenth - 1;
	for(int k=1;k<=lenth/2;k++)
	{
		if (a[i] != a[j]) return false;
		i++;
		j--;
	}
	return true;
}
int main()
{
	long long n, w[36];
	int met = 0,p=-1;
	cin >> n;
	for (int i = 2;i <= 36;i++)
	{
		trans(n,i);
		if (ishuiwen(len) == true)
		{
			met++;
			w[++p] = i;
		}
		for (int k = 0;k < 10000;k++)
		{
			len[k] = '\0';
		}
	}
	
	cout << met << endl;
	for (int l = 0;l <= p;l++)
	{
		cout << w[l] << endl;
	}
	cin >> n;
	return 0;
}
