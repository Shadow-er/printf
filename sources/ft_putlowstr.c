
void ft_putlowstr(char *s)
{
    int i;

    i = 0;
    while(s[i])
        ft_tolower(s[i]);
}