/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2d_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:18:37 by oel-feng          #+#    #+#             */
/*   Updated: 2024/01/26 15:41:35 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	return (0);
}

static int	ft_sign(char c)
{
	if (c == 45)
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	res;
	long long	tmp;

	i = 0;
	sign = 1;
	res = 0;
	if (str[i] == 43 || str[i] == 45)
		sign = ft_sign(str[i++]);
	while (ft_isdigit(str[i]))
	{
		tmp = res * 10 + (str[i++] - 48);
		if (tmp < res && sign == 1)
			return (-1);
		if (tmp < res && sign == -1)
			return (0);
		res = tmp;
	}
	return (res * sign);
}