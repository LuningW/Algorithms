#include <iostream>
using namespace std;
int main ()
{
     string s1, s2;
     getline(cin, s1);
     getline(cin, s2);
     for(int i = 0; i < s1.length(); i++){
     	for(int j = 0; j < s2.length(); j++){
     		if(s1[i] == s2[j]){
     			//标志位 
     			s1[i] = '2';
			 }
		 } 
	 }
	 for(int i = 0; i < s1.length(); i++){
	 	//如果是标志位，则什么也不输出，跳过就行 
	 	if(s1[i] != '2'){
	 		cout << s1[i];
		}
	 } 
	 return 0;
}
