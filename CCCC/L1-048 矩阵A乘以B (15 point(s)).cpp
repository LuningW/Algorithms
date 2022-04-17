#include<iostream>
using namespace std;

int main()
{
    int ra,ca,rb,cb;
    cin>>ra>>ca;
    int A[100][100];
    
    for(int i=0;i<ra;i++)
        for(int j=0;j<ca;j++)
        cin>>A[i][j];

    cin>>rb>>cb;
    if(ca!=rb)
        {
            cout<<"Error: "<<ca<<" != "<<rb<<endl;
            return 0;
        }

     cout<<ra<<" "<<cb<<endl;
     int B[100][100];
     for(int i=0;i<rb;i++)
        for(int j=0;j<cb;j++)
            cin>>B[i][j];
         
     //int C[ra][cb];
     for(int i=0;i<ra;i++)
         for(int j=0;j<cb;j++)
         {
             int sum=0;
             for(int k=0;k<ca;k++)
                 sum+=A[i][k]*B[k][j];
             //sum=C[i][j];
             if(j<cb-1)
                 cout<<sum<<" ";
             else
                 cout<<sum<<endl;
         }
    return 0;
}
