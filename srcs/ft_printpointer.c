/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:14:55 by kkc               #+#    #+#             */
/*   Updated: 2024/11/22 15:18:57 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_handlemaxptr(unsigned long nbr, int base)
{
	int		count;
	char	*digithex;

	digithex = "0123456789abcdef";
	if (nbr < (unsigned long)base)
		return (ft_printchar(digithex[nbr]));
	else
	{
		count = ft_handlemaxptr(nbr / base, base);
		return (count + ft_handlemaxptr(nbr % base, base));
	}
}

int	ft_printpointer(void *ptr)
{
	int		len;
	long	point;

	len = 0;
	point = (long)ptr;
	if (ptr == 0)
		return (ft_printstr("(nil)"));
	else
	{
		len += ft_printstr("0x");
		len += ft_handlemaxptr(point, 16);
	}
	return (len);
}
