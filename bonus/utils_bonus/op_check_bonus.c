/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_check_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:01:24 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/24 07:11:44 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static bool	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	while ((s1[a] || s2[a]) && a < n)
	{
		if (s1[a] != s2[a])
			return (false);
		a++;
	}
	return (true);
}

static void	keep_checking(size_t size, char **line, t_stack **a, t_stack **b)
{
	if (ft_strncmp(*line, "rr", 2) && size == 2)
	{
		rotate(a);
		rotate(b);
	}
	else if (ft_strncmp(*line, "rra", 3) && size == 3)
		reverse_rotate(a);
	else if (ft_strncmp(*line, "rrb", 3) && size == 3)
		reverse_rotate(b);
	else if (ft_strncmp(*line, "rrr", 3) && size == 3)
	{
		reverse_rotate(a);
		reverse_rotate(b);
	}
	else
	{
		ft_putendl_fd("Operations doesn't exist", 2);
		exit(EXIT_FAILURE);
	}
}

void	oper_check(char **line, t_stack **a, t_stack **b)
{
	size_t	size;

	size = ft_strlen(*line) - 1;
	if (ft_strncmp(*line, "sa", 2) && size == 2)
		swap(a);
	else if (ft_strncmp(*line, "sb", 2) && size == 2)
		swap(b);
	else if (ft_strncmp(*line, "ss", 2) && size == 2)
	{
		swap(a);
		swap(b);
	}
	else if (ft_strncmp(*line, "pa", 2) && size == 2)
		push(b, a);
	else if (ft_strncmp(*line, "pb", 2) && size == 2)
		push(a, b);
	else if (ft_strncmp(*line, "ra", 2) && size == 2)
		rotate(a);
	else if (ft_strncmp(*line, "rb", 2) && size == 2)
		rotate(b);
	else
		keep_checking(size, line, a, b);
}
