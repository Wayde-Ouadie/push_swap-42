/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 05:24:34 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/20 09:23:24 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*lstlast(t_stack *list)
{
	if (!list)
		return (NULL);
	while (list->next != NULL)
		list = list->next;
	return (list);
}

int	lstsize(t_stack *lst)
{
	int		n;
	t_stack	*list;

	n = 0;
	list = lst;
	while (list)
	{
		n++;
		list = list->next;
	}
	return (n);
}

void	lst_add_back(t_stack **stack, int n)
{
	t_stack	*list;
	t_stack	*last;

	if (!stack)
		return ;
	list = malloc(sizeof(t_stack));
	if (!list)
		return ;
	list->next = NULL;
	list->value = n;
	if (!(*stack))
	{
		*stack = list;
		list->prev = NULL;
	}
	else
	{
		last = lstlast(*stack);
		last->next = list;
		list->prev = last;
	}
}

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
