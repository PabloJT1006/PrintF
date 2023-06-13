# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 15:59:39 by pjimenez          #+#    #+#              #
#    Updated: 2023/06/13 16:56:19 by pjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printft.a
LIIBFT = libft
FILES = ft_printHexa.c ft_printnbr.c ft_printP.c ft_printUn.c main.c
FLAGS = -Wall -Wextra -Werror
OBJS = $(FILES:.c=.o)

all : $(NAME)
$(NAME):	$(OBJS)
			@make -C $(LIBFT)
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			@ar rcs $(NAME) $(OBJS)
$(OBJS) : $(FILES)
	@gcc $(FLAGS) -c $(NAME)

clean:
	@rm -f $(OBJS)
	make clean -C $(LIBFT)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(LIBFT)/libft.a

re : fclean clean
.PHONY: all clean fclean re