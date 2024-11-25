/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuphex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:47:11 by kkc               #+#    #+#             */
/*   Updated: 2024/11/21 15:58:46 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printuphex(unsigned int x)
{
	int		count;
	char	*set;

	set = "0123456789ABCDEF";
	if (x < 16)
		return (ft_printchar(set[x]));
	else
	{
		count = ft_printuphex(x / 16);
		return (count + ft_printuphex(x % 16));
	}
}
