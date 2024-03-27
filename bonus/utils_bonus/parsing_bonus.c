/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 03:18:07 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/24 06:20:36 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

bool	parsing(int ac, char **av, t_stack **a)
{
	char	**arr;
	char	*str;
	bool	check;

	if (ac < 2 || (ac == 2 && !av[1][0]))
		return (false);
	str = ft_strjoin(ac, av, " ");
	arr = ft_split(str, ' ');
	if (arr == NULL || arr[0] == NULL)
		return (false);
	check = stack_init(a, arr);
	ft_memoryfree(arr, ft_words(str, ' '));
	free(str);
	return (check);
}
