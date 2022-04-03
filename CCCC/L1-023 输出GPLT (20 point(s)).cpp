#include<iostream>
#include<stack> 
using namespace std;

int main(){
	
	stack<char> G;
	stack<char> P;
	stack<char> L;
	stack<char> T;
	
	string str;
	
	getline(cin,str);
	
	for(int i=0;i<str.length();i++){
		
		if(str.at(i)=='G'||str.at(i)=='g'){
			G.push('G');
		}
		if(str.at(i)=='P'||str.at(i)=='p'){
			P.push('P');
		}
		if(str.at(i)=='L'||str.at(i)=='l'){
			L.push('L');
		}
		if(str.at(i)=='T'||str.at(i)=='t'){
			T.push('T');
		}
		
	}
	

	while(1){
		int ss=4;
		if(G.size()!=0){
			cout<<G.top();
			G.pop(); 
		}else ss--;
		
		
		if(P.size()!=0){
			cout<<P.top();
			P.pop();
		}else ss--;
		
		if(L.size()!=0){
			cout<<L.top();
			L.pop();
		}else ss--;
		if(T.size()!=0){
			cout<<T.top();
			T.pop();
		}else ss--;
		
		if(ss==0){
			break;
		}
		
	}
	
}
