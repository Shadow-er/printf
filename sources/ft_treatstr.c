int ft_treatstr(char * s)
{
    int sum;

    sum = 0;
    if (!s)
        return (0);
    sum += ft_putstring(s);
    return (sum);
}