/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 02:41:37 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/26 23:14:32 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*last;

	if (!*stack || !(*stack)->next)
		return ;
	last = lstlast(*stack);
	last->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
}

void	double_rr(t_stack **a, t_stack **b, t_stack *most_eff)
{
	while (*a != most_eff->target && *b != most_eff)
		rr(a, b);
	indexing(*a);
	indexing(*b);
}

void	ra(t_stack **a)
{
	rotate(a);
	ft_putendl_fd("ra", 1);
}

void	rb(t_stack **b)
{
	rotate(b);
	ft_putendl_fd("rb", 1);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_putendl_fd("rr", 1);
}
