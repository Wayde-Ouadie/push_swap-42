# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 03:24:56 by oel-feng          #+#    #+#              #
#    Updated: 2024/02/16 22:31:19 by oel-feng         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = push_swap.c parsing.c utils/ft_split.c utils/ft_substr.c
PRINTF = ./printf/printf.a
# BSRC = 
OBJ = ${SRC:.c=.o}
# BOBJ = ${BSRC:.c=.o}
NAME = push_swap
# BONUS = checker
CC = cc
RM = rm -f
FLAG = -Wall -Wextra -Werror

start:
	@make all
	
${PRINTF}:
	@make -C ./printf

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${FLAGS} ${OBJ} ${PRINTF} -o ${NAME} 

# bonus : ${BOBJ}

# ${BONUS} : ${BOBJ}
# 	${CC} ${FLAGS} ${BOBJ} -o ${BONUS}

%.o:%.c push_swap.h bonus/checker.h
	@${CC} ${FLAG} -c $< -o $@

clean:
	@${RM} ${OBJ} ${BOBJ}

fclean: clean
	@${RM} ${NAME} ${BONUS}

re: fclean all