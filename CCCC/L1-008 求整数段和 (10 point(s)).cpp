
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start, end, cout=0, result=0;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
        printf("%5d",i);
        result += i;
        cout++;
        if (cout % 5 == 0) {
            printf("\n");
        }
    }
    cout % 5 != 0 ? printf("\nSum = %d", result) : printf("Sum = %d", result);
    return 0;
}
