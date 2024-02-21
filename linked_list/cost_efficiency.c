/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_efficiency.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:18:31 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/21 06:30:36 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    indexing(t_stack *stack)
{
    int i;
    int half;

    i = 0;
    if (!stack)
        return ;
    half = lstsize(stack) / 2;
    while (stack)
    {
        stack->index = i;
        if (i <= half)
            stack->half = true;
        else
            stack->half = false;
        stack = stack->next;
        i++;
    }
}

void    cost_node_a(t_stack *a, t_stack *b)
{
    int size_a;
    int size_b;
    
    size_a = lstsize(a);
    size_b = lstsize(b);
    while (a)
    {
        a->cost = a->index;
        if (!(a->half))
            a->cost = size_a - (a->index);
        if (a->target->half)
            a->cost += a->target->index;
        else
            a->cost += size_b - (a->target->index);
        a = a->next; 
    }
}

void    set_best_move(t_stack *a)
{
    long    efficiency;
    t_stack *most_efficient;

    if (!a)
        return ;
    efficiency = LONG_MAX;
    while (a)
    {
        if (a->cost < efficiency)
        {
            efficiency = a->cost;
            most_efficient = a;
        }
        a = a->next;
    }
    most_efficient->efficient = true;
}