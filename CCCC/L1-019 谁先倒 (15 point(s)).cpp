#include <iostream>

using namespace std;

int main()
{
    int a_jl,b_jl;//a的酒量和b的酒量
    cin>>a_jl>>b_jl;
    int n;//轮数
    cin>>n;
    int a=a_jl,b=b_jl;//a和b还能喝的杯数
    int a1,a2,b1,b2;//1为喊，2为划
    for(int i=0;i<n;i++)
    {
        cin>>a1>>a2>>b1>>b2;
        int sum=a1+b1;
        if(sum==a2&&(a2!=b2))
            a--;
        if(sum==b2&&(a2!=b2))
            b--;
        if(a<0)
        {
            cout<<'A'<<endl<<b_jl-b;
            break;
        }

        if(b<0)
        {
            cout<<'B'<<endl<<a_jl-a;
            break;
        }

    }
    return 0;
}
