/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:20:57 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/26 23:12:46 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	index_stacks(t_stack **a, t_stack **b)
{
	indexing(*a);
	indexing(*b);
}

static void	initialize_b(t_stack **a, t_stack **b)
{
	index_stacks(a, b);
	target_node_b(a, b);
	cost_node_b(*a, *b);
	set_best_move(*b);
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
	int average;
	int	size;

	average = (min_value(*a) + max_value(*a)) / 2;
	size = lstsize(*a);
	while (size-- > 3 && !sorted(*a))
	{
		if ((*a)->value <= average)
			pb(b,a);
		else if ((*a)->value > average)
		{
			pb(b,a);
			if (lstsize(*b) > 1)
				rb(b);
		}
	}
	sort_three(a);
	while (*b)
	{
		initialize_b(a, b);
		push_to_a(a, b);
	}
	indexing(*a);
	check_min(a);
}
