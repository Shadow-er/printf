/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:21:27 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/04 18:28:37 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstring(char *str)
{
	int	sum;

	sum = 0;
	while( str[sum])
	{
		ft_putchar(str[sum]);
		sum++;
	}
	return (sum);
}
