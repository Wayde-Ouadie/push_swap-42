/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 02:41:30 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/24 06:06:56 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	push(t_stack **stack1, t_stack **stack2)
{
	t_stack	*tmp;

	if (!*stack1)
	{
		ft_putendl_fd("Cannot push", 2);
		exit(EXIT_FAILURE);
	}
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
	tmp = tmp->next;
}
