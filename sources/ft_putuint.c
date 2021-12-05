/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:21:41 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/04 19:01:15 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putuint(unsigned int c)
{
	int		sum;
	char	*d;

	sum = 0;
	if (c == 0)
		return (0);
	d = ft_itoau(c, 10);
	sum += ft_putstring(d);
	free(d);
	return (sum);
}
