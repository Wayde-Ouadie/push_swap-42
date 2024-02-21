/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:20:57 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/21 20:36:14 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	initialize_a(t_stack **a, t_stack **b)
{
	indexing(*a);
	indexing(*b);
	target_node_a(*a, *b);
	cost_node_a(*a, *b);
	set_best_move(*a);
}

void	initialize_b(t_stack **a, t_stack **b)
{
	indexing(a);
	indexing(b);
	target_node_b(a, b);
}

void	sort_three(t_stack **a)
{
	t_stack	*max;

	max = max_stack(*a);
	if (*a == max)
		ra(a);
	else if ((*a)->next == max)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	sort_big(t_stack **a, t_stack **b)
{
	int	lst_size;

	lst_size = lstsize(*a);
	if (lst_size-- > 3 && !sorted(*a))
		pb(b, a);
	if (lst_size-- > 3 && !sorted(*a))
		pb(b, a);
	while (lst_size-- > 3 && !sorted(*a))
	{
		initialize_a(*a, *b);
		push_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		initialize_b(*a, *b);
		push_to_a(a, b);
	}
	indexing(*a);
	check_min(a);
}
