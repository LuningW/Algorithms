int myAtoi(char * str){
    long int value = 0;
    char sysmbol = ' ';
    // 先取出空格
    while(*str == ' '){
        str++;
    }
    // 取+
    if(*str == '+'){
        sysmbol = '+';
        str++;
    }else if(*str == '-'){
        sysmbol = '-';
        str++;
    }
    //取数字
    while(*str >= '0' && *str <= '9'){
        if(value + (*str - 48) / 10.0 >= 214748364.7 && sysmbol != '-'){
            return 2147483647;
        }else if(value + (*str - 48) / 10.0 >= 214748364.8 && sysmbol == '-'){
            return -2147483648;
        } 
        value  = value * 10 + (*str - 48);
        str++; 
    }
    //判断符号返回值
    if(sysmbol != '-'){
        return value;
    }else{
        return -value;
    }
}
