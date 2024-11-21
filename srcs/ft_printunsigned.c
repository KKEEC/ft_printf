/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:41:52 by kkc               #+#    #+#             */
/*   Updated: 2024/11/21 13:41:03 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printft.h"

int	ft_printunsigned(unsigned long nbr)
{
	int		count;
	char	*set;

	set = "0123456789";
	if (nbr == 4294967295)
	{
		write(1, "4294967295", 10);
		return (10);
	}
	if (nbr < 10)
	{
		return (ft_printchar(set[nbr]));
	}
	else
	{
		count = ft_printunsigned(nbr / 10);
		return (count + ft_printunsigned(nbr % 10));
	}
}
