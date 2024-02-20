/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:29:36 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/12 04:17:50 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	sl;
	size_t	dl;

	sl = ft_strlen(src);
	if (size == 0 && !dest)
		return (size + sl);
	a = 0;
	b = ft_strlen(dest);
	dl = ft_strlen(dest);
	if (size <= dl)
		return (size + sl);
	while (src[a] && size > b + 1)
		dest[b++] = src[a++];
	dest[b] = 0;
	return (sl + dl);
}
