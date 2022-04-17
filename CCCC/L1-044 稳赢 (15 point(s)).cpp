#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,m=0;
    cin>>k;
    while(1)
    {
        string str;
        cin>>str;
        if(str[0]=='E')
            return 0;
        if(m!=k)
        {
            if(str[0]=='B')
                cout<<"JianDao"<<endl;
            else if(str[0]=='C')
                cout<<"Bu"<<endl;
            else
                cout<<"ChuiZi"<<endl;
                m++;
         }
         else
         {
             cout<<str<<endl;
             m=0;
         }
      }
    return 0;
}
