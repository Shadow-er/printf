/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:23:43 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/05 08:48:46 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat(const char *r, va_list args)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (1)
	{
		if (!r[i])
			break ;
		if (r[i] == '%' && r[i + 1])
		{
			i++;
			if (isIn_list(r[i]))
				sum += ft_treater(r[i], args);
			else if (r[i])
				sum += ft_treatchar(r[i]);
		}
		else if (r[i] != '%')
			sum += ft_treatchar(r[i]);
		i++;
	}
	return (sum);
}

int	ft_printf(const char *format, ...)
{
	int			sum;
	const char	*r;
	va_list		args;

	if (!format)
		return (0);
	sum = 0;
	r = ft_strdup(format);
	va_start(args, format);
	sum += ft_treat(r, args);
	va_end(args);
	free((char *)r);
	return (sum);
}
#include <stdio.h>
int main()
{
	printf("%d\n", 0);
	ft_printf("%d",0);
}