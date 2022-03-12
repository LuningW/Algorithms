/*
请编写程序统计每种不同的个位数字出现的次数。例如：给定 N=100311，则有 2 个 0，3 个 1，和 1 个 3。
每个输入包含 1 个测试用例，即一个不超过 1000 位的正整数 N。
输出：对 N 中每一种不同的个位数字，以 D:M 的格式在一行中输出该位数字 D 及其在 N 中出现的次数 M。要求按 D 的升序输出。
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    char N[1001]; //注意N的边界！这里N用字符串来表示
    int num[10]={0};
    cin>>N;
    int i=0,tmp;
    //计算总位数
    while(N[i]!='\0')
    {
        tmp=N[i]-'0';
        num[tmp]++;
        i++;
    }
    for(int k=0;k<=9;k++)
    {
        if(num[k]!=0)
            cout<<k<<":"<<num[k]<<endl;
    }
    return 0;
}
