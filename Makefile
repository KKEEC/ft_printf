# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 16:55:20 by kkc               #+#    #+#              #
#    Updated: 2024/11/22 13:07:09 by kkc              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -I.

SOURCES = ft_printf.c ./srcs/ft_fspecifier.c\
	  ./srcs/ft_printbasedigit.c\
	  ./srcs/ft_printchar.c\
	  ./srcs/ft_printstr.c\
	  ./srcs/ft_printuphex.c\
	  ./srcs/ft_printpointer.c

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME) : $(OBJECTS)
	ar crs $(NAME) $(OBJECTS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	@rm -f *.o ./srcs/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
