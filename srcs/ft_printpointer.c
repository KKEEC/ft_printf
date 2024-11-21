/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:14:55 by kkc               #+#    #+#             */
/*   Updated: 2024/11/21 16:17:03 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printft.h"

int	ft_printpointer(void *ptr)
{
	int	len;
	len = 0;
	unsigned long	point;
	point = (unsigned long)ptr;

	if (ptr == 0)
		return (ft_printstr("(nil)"));
	else
	{
		len += ft_printstr("0x");
		len += ft_printbasedigit(point, 16);
	}
	return (len);

}
