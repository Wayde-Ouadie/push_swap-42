/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_efficiency.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:18:31 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/24 23:11:50 by oel-feng         ###   ########.fr       */
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
	half = lstsize(tmp) / 2;
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

void	cost_node_a(t_stack *a, t_stack *b)
{
	int	size_a;
	int	size_b;

	size_a = lstsize(a);
	size_b = lstsize(b);
	while (a)
	{
		a->cost = a->index;
		if (!(a->half))
			a->cost = size_a - (a->index);
		if (a->target->half)
			a->cost += a->target->index;
		else
			a->cost += size_b - (a->target->index);
		a = a->next;
	}
}

void	set_best_move(t_stack *a)
{
	long	efficiency;
	t_stack	*most_eff;

	if (!a)
		return ;
	efficiency = LONG_MAX;
	while (a)
	{
		if (a->cost < efficiency)
		{
			efficiency = a->cost;
			most_eff = a;
		}
		a = a->next;
	}
	most_eff->efficient = true;
}

t_stack	*get_best_move(t_stack *a)
{
	if (!a)
		return (NULL);
	while (a)
	{
		if (a->efficient)
			return (a);
		a = a->next;
	}
	return (NULL);
}
