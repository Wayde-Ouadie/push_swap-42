/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line_utils_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:40:11 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/23 09:41:07 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	if (!str)
		return (NULL);
	while ((char)c != *str)
	{
		if (!*str)
			return (NULL);
		str++;
	}
	return ((char *)str);
}

char	*ft_strjoin_v2(char *s1, char *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (!s1)
		return (ft_strdup(s2));
	i = 0;
	j = 0;
	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		res[i] = s2[j];
		j++;
		i++;
	}
	res[i] = '\0';
	free(s1);
	return (res);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		j = 0;
	else if (ft_strlen(s) - start < len)
		j = ft_strlen(s) - start;
	else
		j = len;
	res = malloc(sizeof(char) * (j + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < j)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strdup(char *s)
{
	char	*res;
	size_t	i;

	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = 0;
	return (res);
}