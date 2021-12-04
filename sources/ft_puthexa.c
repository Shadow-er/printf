/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:20:27 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/04 18:25:49 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int c, int low)
{
	int		sum;
	char	*d;

	sum = 0;
	if (c == 0)
		return (0);
	d = itoalng((unsigned long)c, 16);
	if (low == 1)
		d = ft_strlow(d);
	sum += ft_putsring(d);
	free(d);
	return (sum);
}
