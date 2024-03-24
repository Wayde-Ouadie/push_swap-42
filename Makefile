# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 03:24:56 by oel-feng          #+#    #+#              #
#    Updated: 2024/03/24 05:56:21 by oel-feng         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = push_swap.c parsing.c stack.c utils/parse_check.c linked_list/linked_list_utils.c \
	operations/push.c operations/swap.c operations/rotate.c operations/reverse_rotate.c \
	operations/sorting.c linked_list/big_push.c linked_list/cost_efficiency.c linked_list/target.c \
	utils/ft_atol.c utils/ft_split.c utils/ft_strjoin.c utils/ft_substr.c utils/ft_putendl_fd.c \
	linked_list/min_max_finder.c \

SRC_BNS = bonus/get_line_bonus/get_line_bonus.c bonus/get_line_bonus/get_line_utils_bonus.c bonus/operations_bonus/push_bonus.c \
	bonus/operations_bonus/reverse_rotate_bonus.c bonus/operations_bonus/rotate_bonus.c bonus/operations_bonus/swap_bonus.c \
	bonus/utils_bonus/ft_atol_bonus.c bonus/utils_bonus/ft_putendl_fd_bonus.c bonus/utils_bonus/ft_split_bonus.c \
	bonus/utils_bonus/ft_strjoin_bonus.c bonus/utils_bonus/linked_list_utils_bonus.c bonus/utils_bonus/parse_check_bonus.c \
	bonus/utils_bonus/stack_bonus.c bonus/checker_bonus.c bonus/parsing_bonus.c bonus/op_check_bonus.c \

OBJ = ${SRC:.c=.o}
OBJ_BNS = ${SRC_BNS:.c=.o}
NAME = push_swap
NAME_BNS = checker
CC = cc
RM = rm -f
FLAG = -Wall -Wextra -Werror -fsanitize=address -g

all: ${NAME}

%.o:%.c push_swap.h bonus/checker_bonus.h
	@${CC} ${FLAG} -c $< -o $@

${NAME}: ${OBJ}
	@${CC} ${FLAG} $^ -o ${NAME}

bonus: ${OBJ_BNS}
	@${CC} ${FLAG} ${OBJ_BNS} -o ${NAME_BNS}

clean:
	@${RM} ${OBJ} ${OBJ_BNS}

fclean: clean
	@${RM} ${NAME} ${NAME_BNS}

re: fclean all