/*
所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。

给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。

输入格式:
输入在一行给出1个正整数N（≤1000）和一个符号，中间以空格分隔。

输出格式:
首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。

输入样例:
19 *
*/

#include<iostream>
using namespace std;

int main()
{
    int i=1,n,all=0,last,arry;
    char s;
    cin>>n>>s;
    for(;(all-1)<=n;i=i+2)
    {
        all=all+2*i;
    }
    i=i-2;
    all=all-2*i-1;
    i=i-2;
    arry=i/2+1;
    last=n-all;
    //上层沙漏
    for(int j=0;j<arry;j++)
    {
        for(int k=j;k>0;k--)
            cout<<" ";
        for(int l=1;l<=i-2*j;l++)
            cout<<s;
        cout<<endl;
    }
    for(int j=arry-2;j>=0;j--)
    {
        for(int k=j;k>0;k--)
            cout<<" ";
        for(int l=1;l<=i-2*j;l++)
            cout<<s;
        cout<<endl;
    }
    cout<<last<<endl;
    return 0;
}
