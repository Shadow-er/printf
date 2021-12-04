
int ft_putint(int c)
{
    int             sum;
    unsigned int    i;
    char            *d;

    sum = 0;
    i = 0;
    if (c == 0)
        return (0);
    if (c < 0)
    {
        ft_pustring("-");
        c = -c;
        i = c;
        sum++;
    }
    d = ft_itoa(c);
    sum += ft_putstring(d);
    free(d);
    return (sum);
}