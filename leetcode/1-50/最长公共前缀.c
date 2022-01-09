char * longestCommonPrefix(char ** strs, int strsSize){
    int flen = strlen(strs[0]),i = 0,j = 0;
    char *s = malloc(sizeof(char*)*201);
    memset(s,'\0',201);    
    do{
        for(i=1;i<strsSize;i++)
        {            
            if(strs[0][j]!=strs[i][j])
            {
                break;
            }
        }
        if(i==strsSize)
        {
            s[j]=strs[0][j];
        }
        else
        {
            break;
        }
        j++;

    }while(j<flen&&i==strsSize);
    return s;
}
