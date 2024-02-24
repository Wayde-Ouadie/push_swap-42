/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:08:02 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/24 23:12:40 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	target_node_a(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*node;
	t_stack	*node2;
	long	biggest_smallest;

	node2 = *a;
	while (*a)
	{
		biggest_smallest = LONG_MIN;
		tmp = *b;
		while (tmp)
		{
			if (tmp->value < (*a)->value && tmp->value > biggest_smallest)
			{
				biggest_smallest = tmp->value;
				node = tmp;
			}
			tmp = tmp->next;
		}
		(biggest_smallest == LONG_MIN) && ((*a)->target = max_stack(*b));
		(biggest_smallest != LONG_MIN) && ((*a)->target = node);
		*a = (*a)->next;
	}
	*a = node2;
}

void	target_node_b(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*node;
	t_stack	*node2;
	long	smallest_biggest;

	node2 = *b;
	while (*b)
	{
		smallest_biggest = LONG_MAX;
		tmp = *a;
		while (tmp)
		{
			if (tmp->value > (*b)->value && tmp->value < smallest_biggest)
			{
				smallest_biggest = tmp->value;
				node = tmp;
			}
			tmp = tmp->next;
		}
		(smallest_biggest == LONG_MAX) && ((*b)->target = min_stack(*a));
		(smallest_biggest != LONG_MAX) && ((*b)->target = node);
		*b = (*b)->next;
	}
	*b = node2;
}
