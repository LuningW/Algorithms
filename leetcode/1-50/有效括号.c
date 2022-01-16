char sympolFun(char *sympol)
{
    if (sympol == ')') {
        return '(';
    }
    if (sympol == '}') {
        return '{';
    }
    if (sympol == ']') {
        return '[';
    }
    return 0;
}

bool isValid(char * s){
    int len = strlen(s);
    // 如果不是偶数个符号，则直接返回FALSE
    if (len % 2 != 0) {
        return false;
    }
    // 使用栈用于存储左括号符号
    char sympolBuf[len + 1];
    int top = 0;

    // 遍历判断
    for (int i = 0; i < len; i++) {
        char ch = sympolFun(s[i]);
        if (ch == 0) { // 如果是左括号，则保存至栈
            sympolBuf[top++] = s[i]; 
        } else { // 如果第一个就是右括号，则返回FALSE，如果是右括号，则跟前一个左括号比较，如果不是括号组，则返回FALSE
            if (top == 0 || ch != sympolBuf[top - 1]) {
                return  false;
            }
            top--; // 是括号组，则出栈
        }
    }
    return top == 0; // 最后判断是不是都对比完了，全部出栈了
}
