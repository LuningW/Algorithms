/*
利用q【128】模拟hash表， 达到一次遍历的效果
滑动窗口思想，左边界先固定，右边界递增直到有重复；
有重复即表示找到一个局部窗口，左边界改为重复字符第一次出现下标，右边界继续递增直到有重复或者结束。
*/
#define MAX(a,b) ((a)>(b)?(a):(b))

int lengthOfLongestSubstring(char * s){
    int ht[128] = {0};
    int i = 0, left = 0, max = 0;

    while (s[i] != '\0') {
        if (ht[s[i]] != 0) {
            max = MAX(max, i - left);
            left = MAX(ht[s[i]], left);
        }

        ht[s[i]] = i + 1;
        i++;
    }
    max = MAX(max, i - left);
    
    return max;
}
