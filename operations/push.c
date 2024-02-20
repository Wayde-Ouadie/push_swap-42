/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 02:41:30 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/20 08:50:17 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void push(t_stack **stack1, t_stack **stack2)
{
	t_stack *tmp;
	
	if (!*stack1)
		return ;
	tmp = *stack1;
	*stack1 = (*stack1)->next;
	if (*stack1)
		(*stack1)->prev = NULL;
	tmp->prev = NULL;
	if (!*stack2)
	{
		*stack2 = tmp;
		tmp->next = NULL;
	}
	else
	{
		tmp->next = *stack2;
		tmp->next->prev = tmp;
		*stack2 = tmp;
	}
}

void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_putendl_fd("pa", 1);
}

void	pb(t_stack **b, t_stack **a)
{
	push(b, a);
	ft_putendl_fd("pb", 1);
}
