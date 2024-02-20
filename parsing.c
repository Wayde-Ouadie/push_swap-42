/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 03:18:07 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/20 04:29:18 by oel-feng         ###   ########.fr       */
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
	return n;
}

static int	*arr_conversion(char **arr1)
{
	int	i;
	int	*arr2;
	size_t n;
	
	n =  arr_len(arr1) + 1;
	arr2 = malloc(sizeof(int) * n);
	if (!arr2)
		return (memoryfree(arr1, n), NULL);
	i = -1;
	while (arr1[++i])
		arr2[i] = ft_atoi(arr1[i]);
	return (arr2);
}

bool	parsing(int ac, char **av, t_stack *a)
{
	int		i;
	int		j;
	char	**arr1;
	int		*arr2;
	char	*str;

	i = 1;
	(void)a;
	while (i < ac)
	{
		str = ft_strjoin(ac, av, " ");
		arr1 = ft_split(str, ' ');
		if (arr1 == NULL)
			return (false);
		else if (arr1[0] == NULL)
			return (false);
		j = -1;
		while (arr1[++j])
			if (!ft_atoi(arr1[j]))
				return (false);
		i++;
	}
	arr2 = arr_conversion(arr1);
	if (arr2 == NULL)
		return (false);
	return (true);
}
