SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_unsigned.c \
	ft_puthexlow.c ft_puthexup.c ft_putadress.c ft_printf.c
OBJ = ${SRC:.c=.o}
NAME = printf.a
LIB = ar rc
CC = cc
RM = rm -f
FLAG = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
	@${LIB} ${NAME} ${OBJ}

%.o:%.c ft_printf.h
	@${CC} ${FLAG} -c $<

clean:
	@${RM} ${OBJ}

fclean: clean
	@${RM} ${NAME}

re: fclean all