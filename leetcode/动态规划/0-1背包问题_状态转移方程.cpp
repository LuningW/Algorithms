/*
Q：有 N件物品和一个容量为 V的背包，每件物品有各自的价值且只能被选择一次，要求在有限的背包容量下，装入的物品总价值最大。
！！！注意任何参数的边界！
0<N,M≤1000 
0<vi,wi≤1000

##二维数组方法：
###状态f[i][j]定义：前i个物品，背包容量j下的最优解（最大价值）
从f[0][0]开始决策，有N件物品，则需要N次决策，每一次对第i件物品的决策，状态f[i][j]进行不断的更新
###当前背包容量不够（j<v[i]）不选，因此前i件物品的最优解位前i-1件物品的最优解：
f[i][j]=f[i-1][j]
###当前背包容量足够，可以选，因此需要决策选哈斯hi不选第i个物品：
选：f[i][j]=f[i-1][j-v[i]+w[i]]
不选：f[i][j]=f[i-1][j]
然后用max（）；判断选不选
*/

#include<iostream>
using namespace std;

const int MAX=1001;//边界问题！！！
int v[MAX];
int w[MAX];
int f[MAX][MAX];//前i个物品背包容量j下的最优解

int max(int a,int b)
{
  return a>b?a:b;
}
int main()
{
  int n,m;//n为物品个数，m为背包容量
  cin>>n>>m;
  for(int i=1;i<=n;i++)
    cin>>v[i]>>w[i];
  for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
      //不能装第i件物品，价值等于前i-1个物品
      if(j<v[i])
        f[i][j]=f[i-1][j];
      //可以装，需进行决策
      else
        f[i][j]=max(f[i-1][j],f[i-1][j-v[i]]+w[i]);
    }
  cout<<f[n][m]<<endl;
  return 0;
}
