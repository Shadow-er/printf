/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:21:41 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/05 09:03:49 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putuint(unsigned int c)
{
	int		sum;
	char	*d;

	sum = 0;
	if (c == 0)
	{
		ft_treatchar('0');
		return (1);
	}
	d = ft_itoau(c, 10);
	sum += ft_putstring(d);
	free(d);
	return (sum);
}
