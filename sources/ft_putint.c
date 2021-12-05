/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:20:49 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/05 08:49:15 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putint(int c)
{
	int				sum;
	unsigned int	i;
	char			*d;

	sum = 0;
	i = 0;
	if (c == 0)
	{
		ft_treatchar('0');
		return (1);
	}
	if (c < 0)
	{
		ft_putstring("-");
		c = -c;
		i = c;
		sum++;
	}
	d = ft_itoa(c);
	sum += ft_putstring(d);
	free(d);
	return (sum);
}
