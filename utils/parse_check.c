/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_help.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 03:45:52 by oel-feng          #+#    #+#             */
/*   Updated: 2024/02/20 03:48:47 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	parse_check(const char *str)
{
	int			i;
	int			sign;
	long long	res;
	long long	tmp;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
		{
		tmp = res * 10 + (str[i++] - 48);
		if (tmp < res || tmp > INT_MAX || tmp < INT_MIN)
			return (false);
		res = tmp;
		}
		else
			return (false);
	}
	return (true);	
}
