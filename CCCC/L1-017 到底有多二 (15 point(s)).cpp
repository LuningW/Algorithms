#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	double sum = 0, pow = 1;
	cin >> s;
	if (s[0] == '-') {
		pow *= 1.5;
		s.erase(0, 1);
	} 
	if ((s[s.size() - 1] - '0') % 2 == 0) pow *= 2.0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '2') sum++;
	}
	printf("%.2lf%%", sum * 1.0 / s.size() * pow * 100);
	return 0;
} 
