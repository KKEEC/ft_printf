/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fspecifier.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:51:13 by kkc               #+#    #+#             */
/*   Updated: 2024/11/21 15:59:19 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fspecifier(va_list args, const char fspecifier)
{
	int	len;

	len = 0;
	if (fspecifier == 'c' || fspecifier == 'C')
		len += ft_printchar((char)va_arg(args, int));
	else if (fspecifier == 's' || fspecifier == 'S')
		len += ft_printstr((char *)va_arg(args, char *));
	else if (fspecifier == 'd' || fspecifier == 'i')
		len += ft_printbasedigit((long)va_arg(args, int), 10);
	else if (fspecifier == 'u')
		len += ft_printbasedigit((long)va_arg(args, unsigned int), 10);
	else if (fspecifier == 'x')
		len += ft_printbasedigit((unsigned long)va_arg(args, unsigned int), 16);
	else if (fspecifier == 'p')
		len += ft_printpointer(va_arg(args, void *));
	else if (fspecifier == 'X')
		len += ft_printuphex((unsigned long)va_arg(args, unsigned int));
	else if (fspecifier == '%')
		len += ft_printchar('%');
	return (len);
}
