# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mniski <mniski>                            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 02:09:09 by pfuchs            #+#    #+#              #
#    Updated: 2022/09/01 22:02:24 by mniski           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler Variables
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
INCFLAG	= -I .
AR		= ar
ARFLAGS = -rcs
# File Variables
NAME	= ft_printf.a
MAIN	= hex itoa printf ptr putchar putstr unsigned

MAINFILES	= $(addprefix ft_,$(addsuffix .c, $(MAIN)))
MAINOBJ	= $(MAINFILES:.c=.o)

$(NAME): $(MAINOBJ)
	$(AR) $(ARFLAGS) $@ $^

%.o : %.c
	@$(CC) -c $(CFLAGS) $(INCFLAG) $< -o $@

test: $(NAME)
	$(CC) $(NAME) main.c
	./a.out

clean:
	@rm -f $(MAINOBJ)

fclean:	clean
	@rm -f $(NAME)

re:		fclean all

all:	$(NAME)

.PHONY: clean fclean re all