# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 15:59:39 by pjimenez          #+#    #+#              #
#    Updated: 2023/06/19 18:04:14 by pjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printft.a
LIBFT = libft
LIBS = libs/

FLAGS = -Wall -Wextra -Werror -I


FILES = ft_printHexa.c ft_printnbr.c ft_printP.c ft_printUn.c ft_printf.c

OBJS = $(FILES:.c=.o)

all: $(NAME)
$(NAME):$(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	@ar rcs $(NAME) $(OBJS)
			
$(OBJS) : $(FILES) | $(OBJF)
	@gcc $(FLAGS) $(LIBS) -c $< -o $@

		
clean:
	@rm -rf $(OBJS)
	make clean -C $(LIBFT)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(LIBFT)/libft.a

re : fclean all
.PHONY: all clean fclean re