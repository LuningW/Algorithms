#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j=0;
    char A_date[10];
    char C_date[10];
    cin>>A_date;
    getchar();
    while(j<=9)
    {
        i=j;
        if(i==0||i==1||i==3||i==4)
            C_date[i+5]=A_date[j];
        else if(i==6||i==7||i==8||i==9)
            C_date[i-6]=A_date[j];
        else
            C_date[i+2]=A_date[j];
        j++;
    }
    C_date[j]='\0';//没有这个会报错
    cout<<C_date;
    return 0;
}
