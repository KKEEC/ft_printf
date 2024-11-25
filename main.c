/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:34:08 by kkc               #+#    #+#             */
/*   Updated: 2024/11/21 16:39:09 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <limits.h>


int	main(void)
{
	//test for %c
	printf("Test for c character\n");
	printf("\n");
	ft_printf("my char test: %c\n", 'X');
	printf("ny char test: %c\n", 'X');
	ft_printf("my char test; %c\n", 41);
	printf("ny char test: %c\n", 41);

	//test for %s
	printf("\n");
	printf("\n");
	printf("Test for s String\n");
	printf("\n");
	ft_printf("my string test: %s\n", "HELLO");
	printf("ny string test: %s\n", "HELLO");
	ft_printf("my string test; %s\n", "");
	printf("ny string test: %s\n", "");
	ft_printf(" NULL %s NULL \n", NULL);
	printf(" NULL %s NULL \n", NULL);

	printf("\n");
	printf("\n");

	//test for %d
	printf("\n");
	printf("\n");
	printf("Test for integer d\n");
	printf("\n");
	ft_printf("my integer test: %d\n", -2147483648);
	printf("ny integer test: %d\n", -2147483648);
	ft_printf("my integer test; %d\n", 2147483647);
	printf("ny integer test: %d\n", 2147483647);
	ft_printf("my integer test; %d\n", 2147483650);
	printf("ny integer test: %d\n", 2147483650);
	printf("\n");
	printf("\n");

	//test for %p
	char *str = "Hello";
	void *vd =  0;
	
	printf("Test for Pointer p\n");
	printf("\n");
	printf("\n");
	ft_printf("my pointer test: %p\n", str);
	printf("ny pointer test: %p\n", str);
	ft_printf("my pointer test; %p\n", vd);
	printf("ny pointer test: %p\n", vd);
	ft_printf("my pointer test; %p\n", LONG_MIN);
	printf("ny pointer test: %p\n", LONG_MIN);
	ft_printf("my pointer test; %p\n", &printf);
	printf("ny pointer test: %p\n", &printf);
	printf("\n");
	printf("\n");

	// test for %i decimal base 10
	printf("\n");
	printf(" Test for integer in base 10 i\n");
	printf("\n");
	ft_printf("my decimal test: %i\n", -5000);
	printf("ny decimal test: %i\n", -5000);
	ft_printf("my decimal test; %i\n", 2147483647);
	printf("ny decimal test: %i\n", 2147483647);
	ft_printf("my decimal test; %i\n", 3111111111);
	printf("ny decimal test: %i\n", 3111111111);
	printf("\n");
	printf("\n");

	//test for %u unsigned int
	printf("\n");
	printf("Test for unsigned int u\n");
	printf("\n");
	printf("\n");
	ft_printf("my unsigned int test: %u\n", -5000);
	printf("ny unsigned int test: %u\n", -5000);
	ft_printf("my unsigned int test; %u\n", 2147483648);
	printf("ny unsigned int test: %u\n", 2147483648);
	ft_printf("my unsigned int test; %u\n", 4294967294);
	printf("ny unsigned int test: %u\n", 4294967294);
	printf("\n");
	printf("\n");

	//test for %x hexadecimal base 16 in lowercase
	printf("\n");
	printf("Test for hexadecimal in lowercase\n");
	printf("\n");
	printf("\n");
	ft_printf("my hexadecimal lowercase test: %x\n", -5000);
	printf("ny hexadecimal lowercase test: %x\n", -5000);
	ft_printf("my hexadecimal lowercase test; %x\n", 2147483647);
	printf("ny hexadecimal lowercase test: %x\n", 2147483647);
	ft_printf("my hexadecimal lowercase test; %x\n", 3111111111);
	printf("ny hexadecimal lowercase test: %x\n", 3111111111);
	printf("\n");
	printf("\n");

	//test for %X hexadecimal base 16 in uppercase
	printf("\n");
	printf("Test for hexadecimal in base 16 uppercase\n");
	ft_printf("my hexadecimal uppercase test: %X\n", -5000);
	printf("ny hexadecimal uppercase test: %X\n", -5000);
	ft_printf("my hexadecimal uppercase test; %X\n", 2147483647);
	printf("ny hexadecimal uppercase test: %X\n", 2147483647);
	ft_printf("my hexadecimal uppercase test; %X\n", 3111111111);
	printf("ny hexadecimal uppercase test: %X\n", 3111111111);
	printf("\n");
	printf("\n");

	//test for %% when a % is after %
	printf("\n");
	printf("Test for double percentage sign\n");
	printf("\n");
	printf("\n");
	ft_printf("my percecntage sign test: %%%%\n", -5000);
	printf("ny percecntage sign test: %%%\n", -5000);
	ft_printf("my percecntage sign test; %%\n", 2147483647);
	printf("ny percecntage sign test: %%\n", 2147483647);
	ft_printf("my percecntage sign test; %\n", 3111111111);
	printf("ny percecntage sign test: %\n", 3111111111);
	printf("\n");
	printf("\n");

}
