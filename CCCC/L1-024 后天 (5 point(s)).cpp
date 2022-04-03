#include <bits/stdc++.h>
using namespace std;

int main(){
	int G = 0, P = 0, L = 0, T = 0;
	char c;
	while(cin >> c){
		if(toupper(c) == 'G') G++;
		if(toupper(c) == 'P') P++;
		if(toupper(c) == 'L') L++;
		if(toupper(c) == 'T') T++;
	} 
	
	while(G > 0 || P > 0 || L > 0 || T > 0){
		if(G-- > 0) cout << 'G'; 
		if(P-- > 0) cout << 'P'; 
		if(L-- > 0) cout << 'L'; 
		if(T-- > 0) cout << 'T'; 
	}
}
