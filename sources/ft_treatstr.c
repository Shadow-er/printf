/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treatstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:22:37 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/05 08:43:42 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_treatstr(char *s)
{
	int	sum;

	sum = 0;
	if (!s)
		s = "(null)";
	sum += ft_putstring(s);
	return (sum);
}
