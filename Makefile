# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 16:58:20 by dmarceli          #+#    #+#              #
#    Updated: 2021/12/06 16:36:08 by dmarceli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 				= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB1	= ar -rcs
LIB2	= ranlib
RM				= /bin/rm -f

NAME	= libftprintf.a

INCLUDE = .
SRCS	= ft_printf_c.c ft_printf_d.c \
			ft_printf_i.c ft_printf_p.c \
			ft_printf_s.c ft_printf_u.c \
			ft_printf_xg.c  ft_printf_xp.c \
			ft_printf.c ft_printf_distributor.c \
			ft_strchr.c ft_strlen.c

OBJS	= $(SRCS:.c=.o)

all: 		$(NAME) clean

$(NAME): 	$(OBJS) $(INCLUDE)
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