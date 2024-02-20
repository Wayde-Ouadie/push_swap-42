# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 03:24:56 by oel-feng          #+#    #+#              #
#    Updated: 2024/02/20 04:55:29 by oel-feng         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = push_swap.c parsing.c  \
	operations/push.c operations/swap.c operations/rotate.c operations/reverse_rotate.c \
	utils/ft_atoi.c utils/ft_split.c utils/ft_strjoin.c utils/parse_check.c utils/ft_substr.c utils/ft_putendl_fd.c
OBJ = ${SRC:.c=.o}
NAME = push_swap
CC = cc
RM = rm -f
FLAG = -Wall -Wextra -Werror

all: ${NAME}

%.o:%.c push_swap.h
	@${CC} ${FLAG} -c $< -o $@

${NAME}: ${OBJ} 
	@${CC} ${FLAGS} $^ -o ${NAME}


clean:
	@${RM} ${OBJ}

fclean: clean
	@${RM} ${NAME}

re: fclean all