/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 03:14:31 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/23 09:32:29 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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

bool	dup_check(const long *tab, int nbr, int index)
{
	int	i;

	i = 0;
	if (!tab)
		return (false);
	while (i < index)
	{
		if ((int)tab[i] == nbr)
			return (false);
		i++;
	}
	return (true);
}
