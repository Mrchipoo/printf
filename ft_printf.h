/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:47:29 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/26 16:59:06 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int	ft_printf(const char *kalma, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int n, char const *base);
size_t	ft_strlen(const char *str);
int	ft_HEXlower(va_list ptr);
int	ft_int(va_list ptr);
int	ft_HEXupper(va_list ptr);
#endif
