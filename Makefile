# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 15:59:39 by pjimenez          #+#    #+#              #
#    Updated: 2023/06/20 17:12:40 by pjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

FILES = ft_printHexa.c ft_printnbr.c ft_printP.c ft_printUn.c ft_printf.c \
ft_itoa.c ft_strlen.c

OBJS = $(FILES:.c=.o)

all: $(NAME)
$(NAME):$(OBJS)
	@ar rcs $(NAME) $(OBJS)
					
clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -f $(NAME)

re : fclean all
.PHONY: all clean fclean re

