#define ROMAN_1 'I'
#define ROMAN_5 'V'
#define ROMAN_10 'X'
#define ROMAN_50 'L'
#define ROMAN_100 'C'
#define ROMAN_500 'D'
#define ROMAN_1000 'M'

#define v1(n) (n == 1 ? ROMAN_1 : n == 10 ? ROMAN_10 : n == 100 ? ROMAN_100 : n == 1000 ? ROMAN_1000 : 0)
#define v5(n) (n == 5 ? ROMAN_5 : n == 50 ? ROMAN_50 : n == 500 ? ROMAN_500 : 0)

int getHighNum(int *src, int *n) {
    if (*src <= 0) {
        *src = 0;
        *n = 0;
        return 0;
    }
    int v = 0;
    for (int i = 1; i < 10000; i *= 10) {
        if (*src/i >= 1 && *src/i <= 9) {
            v = *src/i;
            *src = *src%i;
            *n = i;
            break;
        }
    }
    return v;
}

char *intNumToRoman(int v) {
    char curPos = 0;
    int n;
    int highV;
    char *pStr = malloc(sizeof(char) * 50);
    memset(pStr,0,50);
    if (pStr == NULL) {
        return NULL;
    }
    do {
        highV = getHighNum(&v, &n);
        switch (highV) {
            case 3:
                pStr[curPos++] = v1(n);
            case 2:
                pStr[curPos++] = v1(n);
            case 1:
                pStr[curPos++] = v1(n);
                break;
            case 4:
                pStr[curPos++] = v1(n);
                pStr[curPos++] = v5(5*n);
                break;
            case 5:
                pStr[curPos++] = v5(5*n);
                break;
            case 6:
                pStr[curPos++] = v5(5*n);
                pStr[curPos++] = v1(n);
                break;
            case 7:
                pStr[curPos++] = v5(5*n);
                pStr[curPos++] = v1(n);
                pStr[curPos++] = v1(n);
                break;
            case 8:
                pStr[curPos++] = v5(5*n);
                pStr[curPos++] = v1(n);
                pStr[curPos++] = v1(n);
                pStr[curPos++] = v1(n);
                break;
            case 9:
                pStr[curPos++] = v1(n);
                pStr[curPos++] = v1(10*n);
                break;
            case 10:
                pStr[curPos++] = v1(10*n);
                break;
            default: break;
        }
    } while (highV);
    return pStr;
}

// 整数转罗马数字
char * intToRoman(int num){
    return intNumToRoman(num);
}
