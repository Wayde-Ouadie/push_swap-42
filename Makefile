# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 03:24:56 by oel-feng          #+#    #+#              #
#    Updated: 2024/02/21 07:00:49 by oel-feng         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = push_swap.c parsing.c stack.c utils/parse_check.c linked_list/linked_list_utils.c \
	operations/push.c operations/swap.c operations/rotate.c operations/reverse_rotate.c \
	operations/sorting.c linked_list/big_push.c linked_list/cost_efficiency.c linked_list/target.c \
	utils/ft_atoi.c utils/ft_split.c utils/ft_strjoin.c utils/ft_substr.c utils/ft_putendl_fd.c \
	linked_list/min_max_finder.c \
	
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