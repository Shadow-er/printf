
char *ft_strlow(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        str[i] = ft_tolower(str[i]);
        i++;
    }
    return (str);
}