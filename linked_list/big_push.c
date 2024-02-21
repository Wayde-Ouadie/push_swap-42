/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:28:46 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/21 07:03:38 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
void    check_top(t_stack **stack, t_stack *top, bool check)
{
    while (*stack != top)
    {
        if (check == true)
        {
            if (top->half)
                ra(stack);
            else
                rra(stack);
        }
        else if (check == false)
        {
            if (top->half)
                rb(stack);
            else
                rrb(stack);
        }
    }
}

void    push_to_b(t_stack **a, t_stack **b)
{
    t_stack *most_eff;

    most_eff = get_best_move(*a);
    if (most_eff->half && !(most_eff->target->half))
    {
        while (*b != most_eff->target && *a != most_eff->target)
            rr(a, b);
        indexing(*a);
        indexing(*b);
    }
    else if (!(most_eff->half) && !(most_eff->target->half))
    {
        while (*b != most_eff->target && *a != most_eff->target)
            rrr(a, b);
        indexing(*a);
        indexing(*b);
    }
    check_top(a, most_eff, true);
    check_top(b, most_eff->target, false);
    pb(b, a);
}

void    push_to_a(t_stack **a, t_stack **b)
{
    check_top(a, (*b)->target, true);
    pa(a, b);
}
