# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 16:58:20 by dmarceli          #+#    #+#              #
#    Updated: 2021/12/02 19:38:17 by dmarceli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

CC = gcc 

CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)

OBJS  = $(SRCS.c=.o)

LIBFT = libft

HEADER = ft_printf.h -L ./libft -lft

.o.c
	@$(CC) $(CFLAGS) $(HEADER) -I $< -c $@

all : $(NAME)

$(NAME) $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
clean:
	@rm -f $(OBJS)
	@make clean -C $(LIBFT)

fclean: clean 
	@rm -f $(NAME)
	@make fclean -C $(LIBFT) 

re : fclean all

.PHONY: all clean fclean re