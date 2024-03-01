/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 05:19:30 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/01 12:05:18 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_arrlen(char **arr)
{
	int	len;

	len = 0;
	while (arr[len])
		len++;
	return (len);
}

bool	sorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (false);
		stack = stack->next;
	}
	return (true);
}

void	stack_init(t_stack **a, char **arr)
{
	int		i;
	int		j;
	long	*tab;

	i = -1;
	j = 0;
	tab = malloc(sizeof(long) * ft_arrlen(arr) + 1);
	while (arr[++i])
	{
		if (!num_check(arr[i]))
			error_msg();
		tab[i] = ft_atoi(arr[i]);
		if (tab[i] > INT_MAX || tab[i] < INT_MIN)
			error_msg();
		if (i != 0 && !dup_check(tab, (int)tab[i], i))
			error_msg();
	}
	i = ft_arrlen(arr);
	while (j < i)
	{
		lst_add_back(a, (int)tab[j]);
		j++;
	}
	free(tab);
}
