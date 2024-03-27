/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 02:41:34 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/27 04:01:51 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*last;

	if (!*stack || !(*stack)->next)
	{
		ft_putendl_fd("Cannot reverse rotate\n", 2);
		exit(EXIT_FAILURE);
	}
	last = lstlast(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}
