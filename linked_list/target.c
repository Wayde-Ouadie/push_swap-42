/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:08:02 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/21 06:17:25 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    target_node_a(t_stack *a, t_stack *b)
{
    t_stack *tmp;
    t_stack *node;
    long    biggest_smallest;

    while (a)
    {
        biggest_smallest = LONG_MIN;
        tmp = b;
        while (tmp)
        {
            if (tmp->value < a->value && tmp->value > biggest_smallest)
            {
                biggest_smallest = tmp->value;
                node = tmp;
            }
            tmp = tmp->next;
        }
        a->target = node;
        a = a->next; 
    }
}

void    target_node_b(t_stack *a, t_stack *b)
{
    t_stack *tmp;
    t_stack *node;
    long    smallest_biggest;

    while (b)
    {
        smallest_biggest = LONG_MAX;
        tmp = a;
        while (tmp)
        {
            if (tmp->value > b->value && tmp->value < smallest_biggest)
            {
                smallest_biggest = tmp->value;
                node = tmp;
            }
            tmp = tmp->next;
        }
        b->target = node;
        b = b->next; 
    }
}
