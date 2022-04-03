#include<iostream>    
#include<string>
        
using namespace std;    
int main()    
{        
	string ab;        
	getline(cin,ab);        
	string a,b;        
	for(int i=0;ab[i]!=32;i++)        
	{            
		a=a+ab[i];        
	}        
	for(int i=a.length()+1;i<ab.length();i++)        
	{            
		b=b+ab[i];        
	}        
	for(int i=0;i<a.length();i++)        
	{            
		if(!isdigit(a[i]) || stoi(a)<=0 || stoi(a)>1000)            
		{                
			a="?";                
			break;            
		}        
	}        
	for(int i=0;i<b.length();i++)        
	{            
		if(!isdigit(b[i]) || stoi(b)<=0 || stoi(b)>1000)            
		{                
			b="?";                
			break;            
		}        
	}        
	if(a=="?" || b=="?")        
	{            
		cout<<a<<" + "<<b<<" = ?";        
	}        
	else        
	{            
		cout<<a<<" + "<<b<<" = "<<stoi(a)+stoi(b);        
	}    
    return 0;
} 
