#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b, c, maxn, minn;
    cin >> a >> b >> c;
    maxn = max(a, b);
    minn = min(a, b);
    if (maxn <= c) cout << minn << "->" << maxn << "->" << c << endl;
    else if (maxn > c) {
        if (minn < c) cout << minn << "->" << c;
        else cout << c << "->" << minn;
        cout << "->" << maxn;
    } 
    return 0;
}
