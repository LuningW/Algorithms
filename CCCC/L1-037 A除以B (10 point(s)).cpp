#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	double consult = a * 1.0 / b;
	if (b > 0) printf("%d/%d=%.2lf\n",a, b, consult);
	else if (b < 0) printf("%d/(%d)=%.2lf\n",a, b, consult);
	else printf("%d/%d=Error\n", a, b);
	return 0;
}
