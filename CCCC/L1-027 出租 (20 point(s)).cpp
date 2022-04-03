#include<iostream>
using namespace std;
string s;
int a[10];
int in[12];
int main()
{
    cin>>s;
    for(int i=0;i<s.length();i++)
        a[s[i]-'0']=1;//桶排思想
    cout<<"int[] arr = new int[]{";
    int cn=0,k=0;
    for(int i=9;i>=0;i--)
    {
        if(a[i]!=0)
        {
            
            in[i]=k++;//妙啊，k是控制下标的
            
            cn++;
            if(cn==1)//cn是控制输出的
                cout<<i;
            else
            cout<<","<<i;
        }
    }
    cout<<"};"<<endl;
    cout<<"int[] index = new int[]{"<<in[s[0]-'0'];
    for(int i=1;i<s.size();i++)
        cout<<","<<in[s[i]-'0'];
    cout<<"};";
    return 0;
} 
