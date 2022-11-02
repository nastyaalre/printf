# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 13:25:43 by aalremei          #+#    #+#              #
#    Updated: 2022/11/02 09:43:59 by aalremei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c		ft_putchar.c	ft_uc_hex.c\
		ft_putstr.c		ft_uns_dgtlen.c	ft_lc_hex.c\
		ft_dgtlen.c		ft_pointer.c\


OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re