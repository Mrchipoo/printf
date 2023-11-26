/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:28:22 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/26 16:46:59 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_HEXlower(va_list ptr)
{
	unsigned int	nbr;

	nbr = va_arg(ptr,unsigned int);
	return (ft_putnbr(nbr, "0123456789abcdef"));
}

int	ft_HEXupper(va_list ptr)
{
	unsigned int	nbr;

	nbr = va_arg(ptr,unsigned int);
	return (ft_putnbr(nbr,"0123456789ABCDEF"));
}

int	ft_int(va_list ptr)
{
	int	nbr;

	nbr = va_arg(ptr, int);
	return (ft_putnbr(nbr,"0123456789"));
}
