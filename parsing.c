/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 03:18:07 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/21 05:42:15 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_msg()
{
	ft_putendl_fd("Error", 2);
	exit(EXIT_FAILURE);
}

void	parsing(int ac, char **av, t_stack **a)
{
	char	**arr;
	char	*str;

	if (ac < 2 || (ac == 2 || !av[1][0]))
		error_msg();
	str = ft_strjoin(ac, av, " ");
	arr = ft_split(str, ' ');
	if (arr == NULL || arr[0] == NULL)
		error_msg();
	stack_init(a, arr);
}
