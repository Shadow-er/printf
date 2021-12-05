/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:21:13 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/05 08:26:55 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putpoint(unsigned long pt)
{
	char	*p;
	int		sum;

	sum = 0;
	if (pt == 0)
	{
		sum += ft_putstring("0x0");
		return (sum);
	}
	p = ft_itoalng(pt, 16);
	p = ft_strlow(p);
	sum += ft_putstring("0x");
	sum += ft_putstring(p);
	free(p);
	return (sum);
}