/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:32:54 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/23 03:14:12 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	bool			half;
	int				cost;
	int				value;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
	struct s_stack	*target;
	bool			efficient;
}	t_stack;

// utils
long	ft_atoi(char *str);
size_t	ft_strlen(const char *str);
char	**ft_split(char *s, char c);
void	ft_putendl_fd(char *s, int fd);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_substr(char *s, unsigned int start, size_t len);

//linked list
int		lstsize(t_stack *lst);
void	check_min(t_stack **a);
t_stack	*lstlast(t_stack *list);
t_stack	*min_stack(t_stack *stack);
t_stack	*max_stack(t_stack *stack);
void	lst_add_back(t_stack **stack, int n);

//stack
void	error_msg(void);
bool	num_check(const char *str);
bool	sorted(t_stack *stack);
void	indexing(t_stack *stack);
void	stack_init(t_stack **a, char **arr);
bool	dup_check(const int *tab, int nbr, int index);
void	parsing(int ac, char **av, t_stack **a);

// push operations
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **b, t_stack **a);

// swap operations
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

// rotate oprations
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	double_rr(t_stack **a, t_stack **b, t_stack *most_eff);
void	double_rrr(t_stack **a, t_stack **b, t_stack *most_eff);

// reverse rotate operations
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

//sorting
void	sort_three(t_stack **a);
void	sort_big(t_stack **a, t_stack **b);

//targeters
void	target_node_a(t_stack **a, t_stack **b);
void	target_node_b(t_stack **a, t_stack **b);

//cost efficiency
void	set_best_move(t_stack *a);
t_stack	*get_best_move(t_stack *a);
void	cost_node_a(t_stack *a, t_stack *b);

//big push
void	push_to_b(t_stack **a, t_stack **b);
void	push_to_a(t_stack **a, t_stack **b);
#endif