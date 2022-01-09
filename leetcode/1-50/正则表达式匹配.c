bool eq(char a, char b)
{
    /* if a == '\0', then s is shorter than p, return false */
    return a != '\0' && (a == b || b == '.');
}

bool isMatch(char *s, char *p)
{
    if (*p == '\0')
        return *s == '\0';
    else
    {
        /* Wildcard lookahead */
        if (*(p + 1) == '*')
        {
            /* Two roads diverge on the wildcard,
                it can be either matched or ignored */
            if (eq(*s, *p))
                return isMatch(s + 1, p) || isMatch(s, p + 2);
            else
                return isMatch(s, p + 2);
        }
        else
        {
            /* Normal match */
            if (eq(*s, *p))
                return isMatch(s + 1, p + 1);
            else
                return false;
        }
    }
}
