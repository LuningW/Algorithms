    char *convertResult;
    int row, oldPos, newPos, charLength;
    //初始化
    charLength = strlen(s);
    convertResult = (char*)malloc(sizeof(char)*(charLength+1));
    convertResult[strlen(s)] = '\0';
    newPos = 0;
    //赋值
    if(numRows==1) return s;
    for(row=1;  row<=numRows;   row++){
        for(oldPos=row; oldPos<=charLength;  oldPos+=2*(numRows-1)){
            convertResult[newPos++] = s[oldPos-1];
            if(oldPos+2*(numRows-1)-2*(row-1)<=charLength && row!=1 && row!=numRows){
                convertResult[newPos++] = s[oldPos+2*(numRows-1)-2*(row-1)-1];
            }
        }
    }
    return convertResult;
}
