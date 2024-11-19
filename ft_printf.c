/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:05:40 by kkc               #+#    #+#             */
/*   Updated: 2024/11/19 19:09:41 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_printchar(str[i]);
		i++;
	}
	return(i);
}

int	ft_fspecifier(va_list args, const char fspecifier)
{
	int	len;
	len = 0;
	if (fspecifier == 'c' || fspecifier == 'C')
		len += ft_printchar((char)va_arg(args, int));
	if (fspecifier == 's' || fspecifier == 'S')
		len += ft_printstr((char *)va_arg(args, char*));
	return (len);
}
int	ft_printf(const char *str, ...)
{
	va_list args;
	int	i;
	int	len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len += ft_fspecifier(args, str[i + 1]);
			i++;
		}
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);

}

int main(void)
{

	printf("%d\n", ft_printf("HELLO%C %sTEST\n", 'x', "hi"));
	printf("%d\n", printf("HELLO%C %sTEST\n", 'x', "hi"));
	return (0);
}
