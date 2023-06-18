# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 15:59:39 by pjimenez          #+#    #+#              #
#    Updated: 2023/06/18 18:21:26 by pjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printft.a
LIBFT = libft
LIBS = libs/

FLAGS = -Wall -Wextra -Werror

SRC_DIR = src/
OBJS_DIR = objs/

SRC_FILES = ft_printHexa ft_printnbr ft_printP ft_printUn ft_printf

FILES = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))


OBJF		=	.cache_exists


all : $(NAME)

$(NAME):	$(OBJS)
			@make -C $(LIBFT)
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			@ar rcs $(NAME) $(OBJS)
			
$(OBJS_DIR)%.o: $(SRC_DIR)%.c | $(OBJf)
			@gcc $(FLAGS) $(LIBS) -c $< -o $@

$(OBJF):
			@mkdir -p $(OBJ_DIR)
		
clean:
	@rm -f $(OBJS_DIR)
	make clean -C $(LIBFT)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(LIBFT)/libft.a

re : fclean clean
.PHONY: all clean fclean re