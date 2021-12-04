int ft_putuint(unsigned int c)
{
    int     sum;
    char    *d;

    sum = 0;
    if (c == 0)
        return (0);
    d = ft_itoau(c);
    sum += ft_putstring(d);
    free(d);
    return (sum);
}