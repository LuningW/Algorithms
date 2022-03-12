/*
输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出fu字。十个数字对应拼音
在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格
eg：-600      fu liu ling ling
*/
#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int N;
    cin>>N;
    if(N==0)
        cout<<"ling";
    else{
        if(N<0)
        {
            cout<<"fu"<<" ";
            N=-N;
        }
        int i=1,m=N;//i是位数
        m=m/10;
        while(m)
        {
            i++;
            m=m/10;
        }
        int num[i];
        for(int j=0;j<i;j++)
        {
            num[j]=N%10;
            N=N/10;
        }
        for(int k=i-1;k>=0;k--)
        {
            switch(num[k])
            {
                case 0:cout<<"ling";break;
                case 1:cout<<"yi";break;
                case 2:cout<<"er";break;
                case 3:cout<<"san";break;
                case 4:cout<<"si";break;
                case 5:cout<<"wu";break;
                case 6:cout<<"liu";break;
                case 7:cout<<"qi";break;
                case 8:cout<<"ba";break;
                case 9:cout<<"jiu";break;
                default:break;
            }
            if(k>0)
                cout<<" ";
        }
    }
    return 0;
}
