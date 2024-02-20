/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:26:34 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/11 00:31:45 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	a;

	a = ft_strlen(src);
	dest = (char *)malloc((a + 1) * sizeof(char));
	if (!dest)
		return (0);
	if (a != 0)
	{
		ft_memcpy(dest, src, a);
		dest[a] = '\0';
	}
	else
		dest[a] = '\0';
	return (dest);
}
