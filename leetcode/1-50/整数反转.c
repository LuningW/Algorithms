int reverse(int x){
    int ans = 0;
    while(x){
        int pop = x % 10;
        x /= 10;
        if(ans > 214748364 || (ans == 214748364 && pop > 7))
            return 0;
        if(ans < -214748364 || (ans == 214748364 && pop < -8))
            return 0;
        ans = ans * 10 + pop;    
    }
    return ans;
}
