/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:51:20 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/09 11:35:36 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (!big && !len)
		return (0);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[a] != '\0')
	{
		b = 0;
		while (big[a + b] == little[b] && (a + b) < len)
		{
			if (big[a + b] == '\0' && little[b] == '\0')
				return ((char *)&big[a]);
			b++;
		}
		if (little[b] == '\0')
			return ((char *)(big + a));
		a++;
	}
	return (0);
}
