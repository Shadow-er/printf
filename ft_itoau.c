#include<stdlib.h>

static unsigned int	uinr(unsigned int nbr)
{
	unsigned int	ui;

	if (nbr < 0)
		nbr *= -1;
	ui = (unsigned int)nbr;
	return (ui);
}

static unsigned int	l_mal(unsigned int nbr, int base)
{
	unsigned int	j;
	unsigned int	ui;
	int				ne;

	j = 0;
	if (nbr < 0)
		ne = 1;
	ui = uinr(nbr);
	while (ui != 0)
	{
		j++;
		ui /= base;
	}
	if (ne == 1)
		j++;
	return (j);
}

static void	ft_putnbr(unsigned int n, char *str, unsigned int *i, int base)
{
	unsigned int	k;

	k = *i;
	if (n >= base)
	{
		*i = *i + 1;
		ft_putnbr(n / base, str, i, base);
	}
	str[k] = (n % base) + '0';
}

static void	reverse(char *c, unsigned int j)
{
	unsigned int	start;
	unsigned int		end;
	char	temp;

	start = 0;
	end = j;
	while (start < end)
	{
		temp = c[start];
		c[start] = c[end];
		c[end] = temp;
		start ++;
		end --;
	}
}

char	*ft_itoau(unsigned int num, int base)
{
	unsigned int	j;
	char			*c;
	unsigned int	ui;

	j = 0;
	if (num == 0)
	{
		c = (char *)malloc(sizeof(char) * 2);
		c[0] = '0';
		c[1] = '\0';
		return (c);
	}
	ui = l_mal(num, base);
	c = (char *)malloc(sizeof(char) * (ui + 1));
	if (c == 0)
		return (0);
	ui = uinr(num);
	ft_putnbr(ui, c, &j, base);
	if (num < 0)
		c[++j] = '-';
	c[++j] = '\0';
	reverse(c, j - 1);
	return (c);
}
