#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    char c;
    string s;
    cin >> n >> c;
    getchar();//这行很重要！没有就会报错，getchar是为了清除回车键
    getline(cin, s);
    if (s.size() < n) {
        for (int i = 0; i < n - s.size(); i++) cout << c;
        cout << s;
    } else {
        for (int i = s.size() - n; i < s.size(); i++)
            cout << s[i];
    }
    return 0;
}
