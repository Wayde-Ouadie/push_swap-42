/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:14:19 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/23 09:32:32 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static char	*ft_concatenate(int size, char **strs, const char *sep, char *res)
{
	int		a;
	int		b;
	int		c;

	a = 1;
	c = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != '\0')
			res[c++] = strs[a][b++];
		b = 0;
		while (sep[b] != '\0' && a < size - 1)
			res[c++] = sep[b++];
		a++;
	}
	res[c] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		len;
	int		i;

	len = 0;
	i = 0;
	if (size == 0)
	{
		res = (char *)malloc(sizeof(char));
		*res = '\0';
		return (res);
	}
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += (ft_strlen(sep) * (size - 1)) + 1;
	res = (char *)malloc(len * sizeof(char));
	if (!res)
		return (0);
	res = ft_concatenate(size, strs, sep, res);
	return (res);
}
