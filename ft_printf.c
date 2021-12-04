#include <stdarg.h>
#include <stdlib.h>

int ft_treat(const char * r,va_list args)
{
    int i;
    int sum;

    i = 0;
    sum = 0;
    while(1)
    {
        if(!r[i])
            break;
        if (r[i] = '%' && r[i + 1])
        {
            i++;
            if (isIn_list(r[i]))
                sum +=ft_treater(r[i],args);
            else if (r[i])
                sum += ft_puchar(r[i]);
        }
        else if (r[i] != '%')
            sum += ft_puchar(r[i]);
        i++;
    }
    return (sum);
}
int ft_printf(const char *format,...)
{
    int sum;
    const char *r;
    va_list args;

    if(!format)
        return (0);
    sum = 0;
    r = ft_strdup(format);
    va_start(args, format);
    sum += ft_treat(r , args);
    va_end(args);
    free(r);
    return (sum);
}