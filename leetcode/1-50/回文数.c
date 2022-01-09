bool isPalindrome(int x){
    long long int num, x1;
    if (x == 0)
    {
        return 1;
    }
    else if (x < 0 || x % 10 == 0)
    {
        return 0;
    }
    else
    {
        x1 = x;
        for (num = 0; x; num = num * 10 + x % 10, x /= 10);
        return x1 == num ? 1 : 0;
    }
}
