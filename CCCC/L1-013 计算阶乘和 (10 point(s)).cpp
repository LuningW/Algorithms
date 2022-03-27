#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, ans = 0;
	cin >> N;
	
	do{
		int tmp = 1, n = N;
		do{
			tmp *= n;
		}while(--n);
		ans += tmp;
	}while(--N);
	
	cout << ans;
} 
