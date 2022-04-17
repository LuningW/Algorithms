#include<iostream>
using namespace std;
int main()
{
    float x,y,z;
    cin>>x>>y>>z;
    float luoxi;
    
    if(y==0)
        luoxi=x*2.455;
    else
        luoxi=x*1.26;
    printf("%.2f ",luoxi);
    if(luoxi>z)
        cout<<"T_T"<<endl;
    else
        cout<<"^_^"<<endl;
    
    return 0;
}
