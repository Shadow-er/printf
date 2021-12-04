/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoalng.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:23:01 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/04 18:32:00 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include<stdlib.h>

static unsigned long	uinr(unsigned long nbr)
{
	unsigned long	ui;

	if (nbr < 0)
		nbr *= -1;
	ui = (unsigned long)nbr;
	return (ui);
}

static unsigned long	l_mal(unsigned long nbr, int base)
{
	unsigned long	j;
	unsigned long	ui;
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

static void	ft_putnbr(unsigned long n, char *str, unsigned long *i, int base)
{
	unsigned long	k;

	k = *i;
	if (n >= base)
	{
		*i = *i + 1;
		ft_putnbr(n / base, str, i, base);
	}
	str[k] = (n % base) + '0';
}

static void	reverse(char *c, unsigned long j)
{
	unsigned long		start;
	unsigned long		end;
	char				temp;

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

char	*ft_itoalng(unsigned long num, int base)
{
	unsigned long	j;
	char			*c;
	unsigned long	ui;

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
