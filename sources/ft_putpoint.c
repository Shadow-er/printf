
int ft_point(unsigned long pt)
{
    char *p;
    int sum;

    sum = 0;
    if (pt == 0)
    {
        sum += ft_putstring("0x0");
        return (sum);        
    }
    p = ft_itoau(pt,16);
    p = ft_putlowstr(p);
    sum += ft_putstring("0x");
    sum += ft_putstring(p);
    free(p);
    return (sum);
}