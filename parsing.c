/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 03:18:07 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/16 22:32:32 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	parsing(int ac, char **av, t_stack *a)
{
	int		i;
	int		j;
	bool	error;
	char	**arr;

	i = 1;
	(void)a;
	error = true;
	while (i < ac)
	{
		arr = ft_split(av[i], ' ');
		if (arr == NULL)
		{
			ft_printf("Error");
			error = false;
		}
		else if (arr[0] == NULL)
		{
			ft_printf("Error");
			error = false;
		}
		j = 0;
		while (arr[j])
		{
			ft_printf("%s>", arr[j]);
			j++;
		}
		i++;
	}
	// j = 0;
	// if (error)
	// {
	// 	while (i > 0)
	// 	{
			
	// 	}	
	// }
	// else
	// 	puts("Parsing Error");
    
    return (error); 
}
