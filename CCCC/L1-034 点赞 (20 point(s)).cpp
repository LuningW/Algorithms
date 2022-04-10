#include<iostream>
using namespace std;
int main() {
    int n, a[1010] = {0}, max = 0, max1 = 0;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        while (m--) {
            int s;
            cin >> s;
            a[s]++;
        }
    }
    for (int i = 1000; i >=0; i--) {
        if (a[i] && a[i] > max1) {
            max = i;
            max1 = a[i];
        }
    }  
    cout << max << " " << max1;
    return 0;
}
