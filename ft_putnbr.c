/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:37:54 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/26 15:20:32 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int n, int base)
{
	int	i;
	char *sym;

	i = 0;
	sym = "0123456789abcdef";
	if (n < 0)
	{
		ft_putchar('-');
		return (ft_putnbr(-n, base) + 1);
	}
	else if (n < base)
		i = ft_putchar(sym[n]);
	else
	{
		i = ft_putnbr((n / base),base);
		return (ft_putnbr((n % base),base) + i);
	}
}
