#include<iostream>
using namespace std;
int main()
{
	int n,count = 0,num;//n为天数，count 为一天中借书次数，num为书名号 
	char a;//按键S ,E
	int h,m;//小时分钟 
	int sumtime = 0;//一天所有书籍总阅读时长 
	cin>>n;
	while (n--)
	{
		int time[1001] = {0};//每本书的借书时长 
		int book[1001] = {0};//每本书的借书次数 
		while (scanf("%d %c %d:%d",&num,&a,&h,&m))
		{	
			
			if (num == 0)
			{
				break;
			}
            book[num]++;//计数，用来标记S,E是不是成双成对的出现的
			if (a == 'S')
			{ 
				time[num] = h*60+m;	//cout<<time[num]<<endl;
			}
			else if (book[num]%2==0 && a == 'E')//S,E成对的出现才进行借书时长的计算 
			{	
				count++;
				time[num] = h*60 + m - time[num];
				sumtime +=time[num]; 
				time[num] = 0; 
			}
		}
		if (count == 0) cout<<"0 0"<<endl;
		else cout<<count<<" "<<(int)(1.0*sumtime/count + 0.5)<<endl;//四舍五入 
		count = 0;
		sumtime = 0;//一天结束后全清零
	}
	return 0;
} 
