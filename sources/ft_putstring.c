int ft_putstr(char * str)
{
    int sum;

    sum = 0;
    while(str[sum])
    {
        ft_putchar(str[sum]);
        sum++;
    }
    return (sum);
}