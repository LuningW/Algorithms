#include <stdio.h>
 
int main() {
    int x = 0, s = 0, n = 0;    // 定义除数，被除数，位数 
    scanf("%d", &x);
    while (s < x) {
        s = s * 10 + 1;         // 被除数末位添1, 直到不小于被除数 
        ++n;                    // 位数增1 
    }
    while (1) {                 // 开始进行除法运算 
        printf("%d", s / x);    // 输出商, 从最高位一直输出到个位，因为最后一定能整除
        s=s%x;                  // 被除数更新为余数 
        
        if (s == 0) break;      // 余数为0则结束 
        
        s = s * 10 + 1;         // 余数末位添1
        ++n;                    // 位数增1 
    }
    printf(" %d\n", n);
    return 0;
}
