/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlowhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:47:11 by kkc               #+#    #+#             */
/*   Updated: 2024/11/21 13:40:28 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printft.h"

int	ft_printlowhex(unsigned int x)
{
	int		count;
	char	*set;

	set = "0123456789abcde";
	if (x < 16)
		return (ft_printchar(set[x]));
	else
	{
		count = ft_printlowhex(x / 16);
		return (count + ft_printlowhex(x % 16));
	}
}
