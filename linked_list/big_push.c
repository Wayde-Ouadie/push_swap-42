/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:28:46 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/23 00:58:03 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_top(t_stack **stack, t_stack *top, char name)
{
	while (*stack && (*stack)->target->value != top->target->value)
	{
		if (name == 'a')
		{
			if (top->half)
				ra(stack);
			else
				rra(stack);
		}
		else if (name == 'b')
		{
			if (top->half)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

void	push_to_b(t_stack **a, t_stack **b)
{
	t_stack	*most_eff;

	most_eff = get_best_move(*a);
	if (most_eff->half && most_eff->target->half)
		double_rr(a, b, most_eff);
	else if (!(most_eff->half) && !(most_eff->target->half))
		double_rrr(a, b, most_eff);
	check_top(a, most_eff, 'a');
	check_top(b, most_eff->target, 'b');
	pb(b, a);
}

void	push_to_a(t_stack **a, t_stack **b)
{
	check_top(a, (*b)->target, 'a');
	pa(a, b);
}
