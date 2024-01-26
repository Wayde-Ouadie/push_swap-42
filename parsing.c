/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 03:18:07 by oel-feng          #+#    #+#             */
/*   Updated: 2024/01/26 03:54:28 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parsing(int ac, char **av, t_stack *a)
{
	int		i;
	int		j;
	char	**arr;

	(void)a;
	i = 1;
	while (i < ac)
	{
		arr = ft_split(av[i], ' ');
		if (arr == NULL)
			puts("Error");
		else if (arr[0] == NULL)
			puts("Error");
		j = 0;
		while (arr[j])
		{
			printf("%s-", arr[j]);
			j++;
		}
		i++;
	}
}
