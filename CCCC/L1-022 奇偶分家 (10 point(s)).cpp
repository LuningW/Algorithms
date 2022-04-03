#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,m,k=0;
    cin>>n;
    //vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m%2==0)
            k++;
        //a.push_back(m);
    }
    cout<<n-k<<" "<<k<<endl;
    return 0;
}
