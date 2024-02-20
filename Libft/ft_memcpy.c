/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:34:18 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/12 04:23:40 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			a;
	unsigned char	*res;
	unsigned char	*org;

	a = 0;
	res = (unsigned char *)dest;
	org = (unsigned char *)src;
	if (!res && !org)
		return (0);
	while (a < n)
	{
		res[a] = org[a];
		a++;
	}
	return (dest);
}
