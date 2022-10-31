NAME = libftprintf.a

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c		ft_putchar.c	ft_itoa_uchex.c\
		ft_putstr.c		ft_itoa_uns.c	ft_itoa_lchex.c\
		ft_strlen.c		ft_itoa.c		ft_pointer.c\

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