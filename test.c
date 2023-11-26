#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int ft_putchar(int c)
{
	int	i;

	i = 0;
	i = write(1, &c, 1);
	return (i);
}

int	ft_write(char spec, va_list ptr)
{
	int	i;

	i = 0;
	if (spec == 'c')
		i = ft_putchar(va_arg(ptr,  int));
	else if (spec == 's')
		i = ft_putstr(va_arg(ptr,char *));
	else if (spec == 'd' || spec == 'i')
		i = ft_putnbr((long)(va_arg(ptr,int)),10);
	else if (spec == 'x')
		i = ft_putnbr((long)(va_arg(ptr,unsigned int)),16);
	return (i);
}

int	ft_printf(const char *kalma, ...)
{
	int	i;
	va_list	ptr;

	i = 0;
	va_start(ptr, kalma);
	while (*kalma)
	{
		if (*kalma == '%')
			i += ft_write(*(++kalma), ptr);
		else
			i += write(1, *(&kalma), 1);
		kalma++;
	}
	va_end(ptr);
	return (i);
}

int	main(void)
{
	int count1,count2;
	count1 = printf("im %x years old\n",19);
	printf("printf = %d\n",count1);
	count2 = ft_printf("im %x years old\n",19);
	printf("mine = %d\n",count2);
	return 0;
}
