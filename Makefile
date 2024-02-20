# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 03:24:56 by oel-feng          #+#    #+#              #
#    Updated: 2024/02/20 02:06:33 by oel-feng         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = push_swap.c parsing.c
#  utils/ft_split.c utils/ft_substr.c
PRINTF = ./printf/printf.a
LIBFT = ./libft/libft.a
# BSRC = 
OBJ = ${SRC:.c=.o}
# BOBJ = ${BSRC:.c=.o}
NAME = push_swap
# BONUS = checker
CC = cc
RM = rm -f
FLAG = -Wall -Wextra -Werror

all: ${NAME}

%.o:%.c push_swap.h bonus/checker.h
	@${CC} ${FLAG} -c $< -o $@

${NAME}: ${OBJ} ${PRINTF} ${LIBFT} 
	@${CC} ${FLAGS} $^ -o ${NAME}

${PRINTF}: ./printf/ft_printf.h
	@make -C ./printf

${LIBFT}: ./libft/libft.h
	@make -C ./libft
	@make bonus -C ./libft

# bonus : ${BOBJ}

# ${BONUS} : ${BOBJ}
# 	${CC} ${FLAGS} ${BOBJ} -o ${BONUS}

clean:
	@make clean -C ./printf
	@make clean -C ./libft
	@${RM} ${OBJ} ${BOBJ}

fclean: clean
	@make fclean -C ./printf
	@make fclean -C ./libft
	@${RM} ${NAME} ${BONUS}

re: fclean all