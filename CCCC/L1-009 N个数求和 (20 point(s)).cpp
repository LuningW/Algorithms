#include<iostream>
#include<cmath> 

using namespace std;

int GCD(int a, int b)//求最大公约数 
{
	if (b == 0) 
		return a;
	else 
		return GCD(b, a%b);
}

int main()
{
	int n, a, b, nume, deno, divisor;
	//numerator 为和的分子，简写nume，denominator为和的分母，简写demo 
	scanf("%d%d/%d", &n, &nume, &deno);

	for (int i = 1; i < n; i++)
	{
		scanf("%d/%d", &a, &b);
		nume = nume * b + a * deno;				//通分之后的分子 
		deno *= b; 								//通分之后的分母
		divisor = GCD(abs(nume), abs(deno));	//divisor为最大公因数 
		nume /= divisor;						//分子约分 
		deno /= divisor;						//分母约分   
	}

	// 如果是分母为负数，需要分子分母交换一下符号，输出时候如果分数是负数的话 负号要在前面
	if (deno < 0) 
	{ 
		deno = -deno; 
		nume = -nume;
	}
	if (nume && nume / deno == 0)
		printf("%d/%d\n", nume, deno);				//不能用if(nume<deno)通不过，用 abs(nume)<deno可以 
	else if (nume%deno == 0)
		printf("%d\n", nume / deno);				//如果nume=0，则包含在nume%deno==0这种情况中,这是一个测试点 
	else
		printf("%d %d/%d\n", nume / deno, nume%deno, deno);
	return 0;
}
