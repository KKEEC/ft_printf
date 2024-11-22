/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbasedigit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:34:26 by kkc               #+#    #+#             */
/*   Updated: 2024/11/21 15:58:05 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printbasedigit(long nbr, int base)
{
	int		count;
	char	*digithex;

	digithex = "0123456789abcdef";
	if (nbr < 0)
	{
		ft_printchar('-');
		return (ft_printbasedigit(-nbr, base) + 1);
	}
	else if (nbr < base)
		return (ft_printchar(digithex[nbr]));
	else
	{
		count = ft_printbasedigit(nbr / base, base);
		return (count + ft_printbasedigit(nbr % base, base));
	}
}
