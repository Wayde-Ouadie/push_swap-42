/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 05:19:30 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/20 05:58:11 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

bool    sorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (false);
		stack = stack->next;
	}
	return (true);
}

void    stack_init(t_stack **a, int *tab)
{
	int i;

	i = -1;
	while (tab[++i])
		lst_add_back(a, tab[i]);
}