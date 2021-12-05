/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:20:49 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/05 09:49:05 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putint(int c)
{
	int				sum;
	unsigned int	i;
	char			*d;
	int				r;

	sum = 0;
	i = 0;
	r = c;
	if (c == 0)
		return (ft_treatchar('0'));
	if (c < 0)
	{
		ft_putstring("-");
		c = -c;
		i = c;
		sum++;
	}
	if (r <= -2147483648)
		d = ft_itoau(i, 10);
	else
		d = ft_itoa(c);
	sum += ft_putstring(d);
	free(d);
	return (sum);
}
