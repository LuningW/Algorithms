#include <iostream>
#include <string>
using namespace std;
struct NODE {
    string name;
    int x;
};
NODE node[60];
int main() {
    int n, num1, num2;//num1标记排名靠后的男孩儿，num2标记排名靠后的女孩
    cin >> n;
    for (int i = 0; i < n; i++) cin >> node[i].x >> node[i].name;
    num1 = num2 = n - 1;
    for (int i = 0; i < n / 2; i++) {
        if (node[i].x == 1) {
            while (node[num1].x == 1) num1--;
            cout << node[i].name << " "<< node[num1--].name << endl;
        } else {
            while (node[num2].x == 0) num2--;
            cout << node[i].name << " " << node[num2--].name << endl;
        }
    }
    return 0;
} 
