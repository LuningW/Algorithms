#include<iostream>
#include<cmath>

using namespace std;
int main()
{    
	int n=0;    
	cin>>n;    
	for(int i=0;i<n;i++)    
	{        
		int h=0,w=0;        
		cin>>h>>w;        
		double standard_w=(h-100)*0.9*2;        
		if(abs(w-standard_w)<standard_w*0.1)        
		{            
			cout<<"You are wan mei!"<<endl;        
		}        
		else        
		{            
			if(w>standard_w)            
			{                
				cout<<"You are tai pang le!"<<endl;            
			}            
			else            
			{                
				cout<<"You are tai shou le!"<<endl;             
			}        
		}    
	}
} 
