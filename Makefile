# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 03:24:56 by oel-feng          #+#    #+#              #
#    Updated: 2024/03/24 07:36:22 by oel-feng         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = mandatory/push_swap.c mandatory/utils/parsing.c mandatory/utils/stack.c mandatory/utils/parse_check.c \
	mandatory/linked_list/linked_list_utils.c mandatory/operations/push.c mandatory/operations/swap.c mandatory/operations/rotate.c \
	mandatory/operations/reverse_rotate.c mandatory/operations/sorting.c mandatory/linked_list/big_push.c \
	mandatory/linked_list/cost_efficiency.c mandatory/linked_list/target.c mandatory/utils/ft_atol.c mandatory/utils/ft_split.c \
	mandatory/utils/ft_strjoin.c mandatory/utils/ft_substr.c mandatory/utils/ft_putendl_fd.c mandatory/linked_list/min_max_finder.c
SRC_BNS = bonus/get_line_bonus/get_line_bonus.c bonus/get_line_bonus/get_line_utils_bonus.c bonus/operations_bonus/push_bonus.c \
	bonus/operations_bonus/reverse_rotate_bonus.c bonus/operations_bonus/rotate_bonus.c bonus/operations_bonus/swap_bonus.c \
	bonus/utils_bonus/ft_atol_bonus.c bonus/utils_bonus/ft_putendl_fd_bonus.c bonus/utils_bonus/ft_split_bonus.c \
	bonus/utils_bonus/ft_strjoin_bonus.c bonus/utils_bonus/linked_list_utils_bonus.c bonus/utils_bonus/parse_check_bonus.c \
	bonus/utils_bonus/stack_bonus.c bonus/checker_bonus.c bonus/utils_bonus/parsing_bonus.c bonus/utils_bonus/op_check_bonus.c
OBJ = ${SRC:.c=.o}
OBJ_BNS = ${SRC_BNS:.c=.o}
NAME = push_swap
NAME_BNS = checker
CC = cc
RM = rm -f
FLAG = -Wall -Wextra -Werror

all: ${NAME}

mandatory/%.o: mandatory/%.c mandatory/push_swap.h
	@${CC} ${FLAG} -c $< -o $@

bonus/%.o: bonus/%.c bonus/checker_bonus.h
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
