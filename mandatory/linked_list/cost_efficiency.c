/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_efficiency.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:18:31 by oel-feng          #+#    #+#             */
/*   Updated: 2024/08/05 11:16:47 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	indexing(t_stack *stack)
{
	int		i;
	int		half;
	t_stack	*tmp;

	tmp = stack;
	i = 0;
	if (!tmp)
		return ;
	if (lstsize(tmp) % 2 == 0)
		half = lstsize(tmp) / 2;
	else
		half = (lstsize(tmp) / 2) + 1;
	while (tmp)
	{
		tmp->index = i;
		if (i <= half)
			tmp->half = true;
		else
			tmp->half = false;
		tmp = tmp->next;
		i++;
	}
}

void	cost_node_b(t_stack *a, t_stack *b)
{
	int	size_a;
	int	size_b;

	size_a = lstsize(a);
	size_b = lstsize(b);
	while (b)
	{
		b->cost = b->index;
		if (!(b->half))
			b->cost = size_b - (b->index);
		if (b->target->half)
			b->cost += b->target->index;
		else
			b->cost += size_a - (b->target->index);
		b = b->next;
	}
}

void	set_best_move(t_stack *stack)
{
	long	efficiency;
	t_stack	*most_eff;

	if (!stack)
		return ;
	efficiency = LONG_MAX;
	while (stack)
	{
		if (stack->cost < efficiency)
		{
			efficiency = stack->cost;
			most_eff = stack;
		}
		stack = stack->next;
	}
	most_eff->efficient = true;
}

t_stack	*get_best_move(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->efficient)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
