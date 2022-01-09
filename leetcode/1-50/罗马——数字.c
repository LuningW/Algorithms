nt romanToInt(char * s){
    int i = 0,total = 0;
    int num[1000] = {0};
    enum roem{I = 1 ,V = 5,X = 10,L = 50 , C = 100,D = 500,M = 1000};
    while(*s)
    {
        switch(*s)
        {
            case 'I' : num[i] = I; break;
            case 'V' : num[i] = V; break;          
            case 'X' : num[i] = X; break;
            case 'L' : num[i] = L; break;
            case 'C' : num[i] = C; break;
            case 'D' : num[i] = D; break;
            case 'M' : num[i] = M; break;
        }
        i++;
        s++;
    }  
    
     for(int j = 0;j<i;j++)
     {
         if(num[j] < num[j+1])
         {
             num[j] = -num[j];
         }
         total += num[j];
     }

     return total;
}
