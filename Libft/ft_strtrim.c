/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:23:27 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/08 16:47:21 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	a;
	size_t	b;
	size_t	size;
	size_t	c;
	char	*res;

	if (!set || !s1)
		return (0);
	a = 0;
	c = -1;
	b = ft_strlen(s1);
	while (a < b && ft_strchr(set, s1[a]))
		a++;
	while (a < b && ft_strchr(set, s1[b - 1]))
		b--;
	size = b - a;
	res = malloc(size + 1);
	if (!res)
		return (0);
	while (++c < size)
		res[c] = s1[a + c];
	res[c] = '\0';
	return (res);
}
