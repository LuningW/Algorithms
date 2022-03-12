/*
所谓二叉搜索树的“镜像”，即将所有结点的左右子树对换位置后所得到的树。

给定一个整数键值序列，现请你编写程序，判断这是否是对一棵二叉搜索树或其镜像进行前序遍历的结果
输入的第一行给出正整数 N（≤1000）。随后一行给出 N 个整数键值，其间以空格分隔。
如果输入序列是对一棵二叉搜索树或其镜像进行前序遍历的结果，则首先在一行中输出 YES ，然后在下一行输出该树后序遍历的结果。数字间有 1 个空格，一行的首尾不得有多余空格。若答案是否，则输出 NO
*/


#include<iostream>
#include<vector>
using namespace std;

const int MAX=1001;
int a[MAX];

vector<int>p;

void bfs(int l,int r,bool isM)
{
    if(l>r) return;
    int lc=r,rc=l+1;
    if(!isM){   //镜像
        while(rc<=r&&a[rc]<a[l])rc++;//从左对前序遍历进行访问
        while(lc>l&&a[lc]>=a[l])lc--;//从右对前序遍历进行访问
    }
    else{    //非镜像
         while(rc<=r&&a[rc]>=a[l])rc++;//从左对前序遍历进行访问
        while(lc>l&&a[lc]<a[l])lc--;//从右对前序遍历进行访问
    }
    if(lc+1!=rc)return;//左子树最后一个元素不是右子树第一个元素的前一个
    bfs(l+1,lc,isM);
    bfs(rc,r,isM);
    p.push_back(a[l]);
    
}
int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>a[i];
    bfs(0,N-1,false);
    if(p.size()!=N)
    {
        p.clear();
        bfs(0,N-1,true);
    }
    if(p.size()!=N)
        cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<N;i++)
        {
            if(i==0)cout<<p[i];
            else cout<<" "<<p[i];
        }
    }
    return 0;
}
