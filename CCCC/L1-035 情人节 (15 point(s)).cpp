#include <iostream>

using namespace std;

int main()
{
    string s,s1,s2;
    int n=0;
    while(cin>>s && s!=".")//录入名字
    {
        n++;
        if(n==2)//第2个赋值给s1
            s1=s;
        if(n==14)//第14个赋值给s2
            s2=s;
    }
    if(s1!=""&&s2!="")//都存在
        cout<<s1<<" and "<<s2<<" are inviting you to dinner...";
    if(s1!=""&&s2=="")//2存在
        cout<<s1<<" is the only one for you...";
    if(s1==""&&s2=="")//均不存在
        cout<<"Momo... No one is for you ...";
    return 0;
}
