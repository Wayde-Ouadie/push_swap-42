/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 05:24:34 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/20 05:50:19 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_stack	*ft_lstlast(t_stack *list)
{
	if (!list)
		return (NULL);
	while (list->next != NULL)
		list = list->next;
	return (list);
}

void    lst_add_back(t_stack **stack, int n)
{
	t_stack *list;
	t_stack *last;

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
		last = ft_lstlast(*stack);
		last->next = list;
		list->prev = last;
	}
}
