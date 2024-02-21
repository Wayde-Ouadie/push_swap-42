/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max_finder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:58:34 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/21 08:49:52 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*max_stack(t_stack *stack)
{
	long	max;
	t_stack	*tmp;

	if (!stack)
		return (NULL);
	max = (long)INT_MIN - 1;
	while (stack)
	{
		if (stack->value > max)
		{
			max = stack->value;
			tmp = stack;
		}
		stack = stack->next;
	}
	return (tmp);
}

t_stack	*min_stack(t_stack *stack)
{
	long	min;
	t_stack	*tmp;

	if (!stack)
		return (NULL);
	min = (long)INT_MAX + 1;
	while (stack)
	{
		if (stack->value < min)
		{
			min = stack->value;
			tmp = stack;
		}
		stack = stack->next;
	}
	return (tmp);
}

void	check_min(t_stack **a)
{
	while ((*a)->value != min_stack(*a)->value)
	{
		if (min_stack(*a)->half)
			ra(a);
		else
			rra(a);
	}
}
