/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoalng.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:23:01 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/05 11:34:58 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include<stdlib.h>

static void	ft_putnbr(unsigned long n, char *str,
unsigned long i, unsigned long base)
{
	unsigned long	k;

	k = i;
	if (n >= base)
	{
		ft_putnbr(n / base, str, i - 1, base);
	}
	if (n % base < 10)
		str[k] = (n % base) + '0';
	else
		str[k] = (n % base) + 55;
}

char	*ft_itoalng(unsigned long num, unsigned long base)
{
	unsigned long	j;
	char			*c;
	unsigned long	ui;

	j = 0;
	ui = num;
	if (num == 0)
	{
		c = ft_strdup("0");
		return (c);
	}
	while (num != 0)
	{
		num /= base;
		j++;
	}
	c = (char *)malloc(sizeof(char) * (j + 1));
	if (c == 0)
		return (0);
	c[j] = '\0';
	ft_putnbr(ui, c, j - 1, base);
	return (c);
}
