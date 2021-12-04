#include "printf.h"

int isIn_list(char * r)
{
    if (*r == 'c' || *r == 's' || *r == 'p' || *r == 'd' || *r == 'i')
        return (1);
    if (*r == 'u' || *r == 'x' || *r == 'X' || *r == '%')
        return (1);
    return (0);
}
int ft_treater(char c, va_list args)
{
    int sum;

    sum = 0;
    if(c == 'c')
        sum += ft_treatchar(va_arg(args,char));
    else if (c == 's')
        sum += ft_treatstr(va_arg(args,char *));
    else if (c == 'p')
        sum += ft_putpoint(va_arg(args,unsigned long));
    else if (c == 'd' || c == 'i')
        sum += ft_putint(va_arg(args,int));
    else if (c == 'u')
        sum += ft_putuint(va_arg(args, unsigned int));
    else if (c == 'x')
        sum += ft_puthexa(va_arg(args, unsigned int),1);
    else if (c == 'X')
        sum += ft_puthexa(va_arg(args, unsigned int),0);
    else if (c == '%')
        sum += ft_putperc(void);
    return (sum);
}
