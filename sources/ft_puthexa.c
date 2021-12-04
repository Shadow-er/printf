int ft_puthexa(unsigned int c, int low)
{
    int sum;
    char *d;

    sum = 0;
    if (c == 0)
        return (0);
    d = itoalng((unsigned long)ui,16);
    if (low == 1)
        d = ft_strlow(d);
    sum += ft_putsring(d);
    free(d);
    return (sum);
}