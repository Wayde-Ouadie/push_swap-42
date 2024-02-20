/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:00:51 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/08 16:47:18 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	sl;
	size_t	a;

	if (!s)
		return (0);
	sl = ft_strlen(s);
	a = 0;
	if (start < sl)
		a = sl - start;
	if (a > len)
		a = len;
	res = (char *)malloc(sizeof(char) * (a + 1));
	if (!res)
		return (0);
	if (a == 0)
		res[a] = '\0';
	else
		ft_strlcpy(res, s + start, a + 1);
	return (res);
}
