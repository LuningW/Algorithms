#include<bits/stdc++.h>
using namespace std;
struct infor
{
    char gender;
    float h;
};
int main()
{
    int n;
    cin>>n;
    infor in[10];
    for(int i=0;i<n;i++)
    {
        cin>>in[i].gender>>in[i].h;
    }
    for(int i=0;i<n;i++)
    {
        if(in[i].gender=='M')
            printf("%.2f\n",in[i].h/1.09);
        else
            printf("%.2f\n",in[i].h*1.09);
    }
    return 0;
}
