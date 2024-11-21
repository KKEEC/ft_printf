/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:03:19 by kkc               #+#    #+#             */
/*   Updated: 2024/11/21 16:14:03 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int ft_printf(const char *str, ...);
int	ft_fspecifier(va_list args, const char fspecifier);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printbasedigit(long nbr, int base);
int	ft_printunsigned(unsigned long nbr);
int	ft_printlowhex(unsigned int x);
int	ft_printuphex(unsigned int x);
int	ft_printpointer(void *ptr);

#endif
