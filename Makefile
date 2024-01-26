# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 03:24:56 by oel-feng          #+#    #+#              #
#    Updated: 2024/01/26 03:38:39 by oel-feng         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = push_swap.c utils/ft_split.c
# BSRC = 
OBJ = ${SRC:.c=.o}
# BOBJ = ${BSRC:.c=.o}
NAME = push_swap
# BONUS = checker
CC = cc
RM = rm -f
FLAG = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o {NAME}

# bonus : ${BOBJ}

# ${BONUS} : ${BOBJ}
# 	${CC} ${FLAGS} ${BOBJ} -o ${BONUS}

%.o:%.c push_swap.h bonus/checker.h
	@${CC} ${FLAG} -c $<

clean:
	@${RM} ${OBJ} ${BOBJ}

fclean: clean
	@${RM} ${NAME} ${BONUS}

re: fclean all