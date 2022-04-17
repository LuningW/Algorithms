#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string name;
    int breath,pulse;
    for(int i=0;i<n;i++)
    {
        
        cin>>name;
        getchar();
        cin>>breath;
        getchar();
        cin>>pulse;
        
        if((breath<15||breath>20)||(pulse<50||pulse>70))
            cout<<name<<endl;
    }
    return 0;
}
