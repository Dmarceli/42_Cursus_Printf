# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danielsequeira <danielsequeira@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 16:58:20 by dmarceli          #+#    #+#              #
#    Updated: 2021/12/06 19:19:58 by danielseque      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB1	= ar -rcs
LIB2	= ranlib
RM				= /bin/rm -f

NAME	= libftprintf.a

INCLUDE = .
SRCS	= ${wildcard *.c}

OBJS	= $(SRCS:.c=.o)

all: 		$(NAME) clean

$(NAME): $(OBJS) $(INCLUDE)
				$(LIB1) $(NAME) $(OBJS)
				$(LIB2) $(NAME)

bonus:		$(NAME) clean

.c.o:
					$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)
clean:
					$(RM) $(OBJS)
fclean: 	clean
					$(RM) $(NAME)

re: 				fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus