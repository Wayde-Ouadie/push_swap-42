/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 05:19:30 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/23 09:37:28 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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

bool	stack_init(t_stack **a, char **arr)
{
	int		i;
	int		j;
	long	*tab;

	i = -1;
	j = 0;
	tab = malloc(sizeof(long) * ft_arrlen(arr) + 1);
	if (tab == NULL)
		return (false);
	while (arr[++i])
	{
		if (!num_check(arr[i]))
			return (false);
		tab[i] = ft_atol(arr[i]);
		if (tab[i] > INT_MAX || tab[i] < INT_MIN)
			return (false);
		if (i != 0 && !dup_check(tab, (int)tab[i], i))
			return (false);
	}
	while (j < ft_arrlen(arr))
	{
		lst_add_back(a, (int)tab[j]);
		j++;
	}
	return (free(tab), true);
}
