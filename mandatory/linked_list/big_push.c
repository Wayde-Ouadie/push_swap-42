/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:28:46 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/26 23:14:42 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	check_top(t_stack **stack, t_stack *top, char name)
{
	while (*stack != top)
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

void	push_to_a(t_stack **a, t_stack **b)
{
	t_stack	*most_eff;

	most_eff = get_best_move(*b);
	if (most_eff->half && most_eff->target->half)
		double_rr(a, b, most_eff);
	else if (!(most_eff->half) && !(most_eff->target->half))
		double_rrr(a, b, most_eff);
	check_top(b, most_eff, 'b');
	check_top(a, most_eff->target, 'a');
	pa(a, b);
}
