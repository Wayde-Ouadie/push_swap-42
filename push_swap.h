/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:32:54 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/20 05:58:18 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				cost;
	bool			half;
	bool			efficient;
	struct s_stack	*target;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

// utils
int		ft_atoi(const char *str);
int		ft_isdigit(int a);
char	**ft_split(const char *s, char c);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
void	ft_putendl_fd(char *s, int fd);

//linked list
void    lst_add_back(t_stack **stack, int n);
int		lstsize(t_stack *lst);

// parsing
bool	parsing(int ac, char **av, t_stack *a);
bool	parse_check(const char *str);

//stack
bool    sorted(t_stack *stack);
void    stack_init(t_stack **a, int *tab);
#endif