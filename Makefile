

CC := cc
CFLAGS := -Wall -Wextra -Werror
SRCS :=	sources/ft_puthexa.c sources/ft_putint.c sources/ft_putperc.c sources/ft_putpoint.c sources/ft_putstring.c sources/ft_putuint.c \
		sources/ft_strlow.c sources/ft_treatchar.c sources/ft_treatstr.c ft_itoalng.c ft_itoau.c ft_printf.c \
		ft_treater.c 
NAME := libftprintf.a
OBJS := ${SRCS:.c=.o}
	
all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar crs $(NAME) $(OBJS)
clean : 
	$(MAKE) clean -C ./libft
	rm -f ${OBJS} 
fclean : clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)
re : fclean all

.PHONY : all clean fclean re bonus 