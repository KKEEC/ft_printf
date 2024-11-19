# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 16:55:20 by kkc               #+#    #+#              #
#    Updated: 2024/11/19 17:02:18 by kkc              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = 

OBJECTS = $(SOURCES: .c=.o)

all: $(NAME)

$(NAME) : $(OBJECTS)
	ar crs $(NAME) $(OBJECTS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	@rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
