/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 05:24:34 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/01 12:07:04 by oel-feng         ###   ########.fr       */
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

void	stack_freeing(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*list;

	if (!a)
		return ;
	list = *a;
	while (list)
	{
		tmp = list->next;
		list->value = 0;
		free(list);
		list = tmp;
	}
	*a = NULL;
}
