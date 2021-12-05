/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlakhssa <mlakhssa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:55:01 by mlakhssa          #+#    #+#             */
/*   Updated: 2021/12/05 07:57:54 by mlakhssa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		isIn_list(char r);
int		ft_puthexa(unsigned int c, int low);
int		ft_putperc(void);
int		ft_putpoint(unsigned long pt);
int		ft_treater(char c, va_list args);
char	*ft_itoau(unsigned int num, int base);
char	*ft_itoalng(unsigned long num, int base);
int		ft_treatstr(char *s);
int		ft_putuint(unsigned int c);
char	*ft_strlow(char *str);
int		ft_putstring(char *str);
int		ft_treatchar(char c);
int		ft_putint(int c);
int		ft_treat(const char *r, va_list args);

#endif
