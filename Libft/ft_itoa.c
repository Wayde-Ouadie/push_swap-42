/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:26:25 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/16 01:03:46 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_check(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		size++;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*res;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 2147483647)
		return (ft_strdup("2147483647"));
	size = ft_size_check(n);
	res = (char *)malloc(size + 1);
	if (!res)
		return (0);
	if (n < 0)
	{
		n *= -1;
		res[0] = '-';
	}
	res[size] = '\0';
	while (n)
	{
		res[--size] = n % 10 + '0';
		n = n / 10;
	}
	return (res);
}
