/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 03:14:31 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/21 08:45:08 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	num_check(const char *str)
{
	int	i;

	i = 0;
	if (!(str[0] == '+' || str[0] == '-' || (str[0] >= '0' && str[0] <= '9')))
		return (false);
	if ((str[0] == '+' || str[0] == '-') && !(str[1] >= '0' && str[1] <= '9'))
		return (false);
	while (str[++i])
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (false);
	return (true);
}

bool	dup_check(const int *tab, int nbr, int index)
{
	int	i;

	i = -1;
	if (!tab)
		return (false);
	while (++i < index)
	{
		if (tab[i] == nbr)
			return (false);
	}
	return (true);
}
