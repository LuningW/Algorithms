
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n,i,j,k;
    long long int number;
    cin>>n;
    for(i=0;i<n;i++)
    {
        k=0;
        cin>>number;
        if(number==1)cout<<"No"<<endl;
        else{
        for(j=2;j<=sqrt(number);j++)
        {
            if(number%j==0)k=1,j=number;
        }
        if(k==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;}
    }
    return 0;
}
