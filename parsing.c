/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 03:18:07 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/20 05:36:57 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	memoryfree(char **res, int a)
{
	int	b;

	b = 0;
	while (b < a)
	{
		free(res[b]);
		b++;
	}
	free(res);
}

static size_t arr_len(char **arr)
{
	size_t n = 0;

	while (arr[n])
		n++;
	return (n);
}

static void	*arr_conversion(char **arr, t_stack *a)
{
	int	i;
	int	*tab;
	size_t n;
	
	n =  arr_len(arr) + 1;
	tab = malloc(sizeof(int) * n);
	if (!tab)
		return (memoryfree(arr, n), NULL);
	i = -1;
	while (arr[++i])
		tab[i] = ft_atoi(arr[i]);
	stack_init(&a, tab);
	return (NULL);
}

bool	parsing(int ac, char **av, t_stack *a)
{
	int		i;
	int		j;
	char	**arr;
	char	*str;

	i = 0;
	(void)a;
	while (++i < ac)
	{
		str = ft_strjoin(ac, av, " ");
		arr = ft_split(str, ' ');
		if (arr == NULL)
			return (false);
		else if (arr[0] == NULL)
			return (false);
		j = -1;
		while (arr[++j])
			if (!ft_atoi(arr[j]))
				return (false);
	}
	arr_conversion(arr, a);
	return (true);
}
