#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,i;
    scanf("%02d:%02d",&a,&b);
    if(a>=0&&a<12)printf("Only %02d:%02d.  Too early to Dang.",a,b);
    else if(a==12&&b==00)printf("Only %02d:%02d.  Too early to Dang.",a,b);
    else if(b==00)
    {
        if(a>12)a=a-12;
        for(i=0;i<a;i++)
        {
            cout<<"Dang";
        }
        cout<<endl;
    }
    else
    {
        if(a>12)a=a-12;
        for(i=0;i<=a;i++)
        {
             cout<<"Dang";
        }
        cout<<endl;
    }
    return 0;
}
