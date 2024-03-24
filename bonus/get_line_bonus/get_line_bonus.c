/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:39:51 by oel-feng          #+#    #+#             */
/*   Updated: 2024/03/23 22:58:22 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static char	*read_data(int fd, char *buffer, char *data)
{
	ssize_t	lread;

	lread = 1;
	while (lread && !ft_strchr(buffer, '\n'))
	{
		lread = read(fd, buffer, BUFFER_SIZE);
		if (lread < 0)
			return (free(data), data = NULL, NULL);
		buffer[lread] = 0;
		data = ft_strjoin_v2(data, buffer);
	}
	return (data);
}

static char	*gettingline(char *data)
{
	int	i;

	i = 0;
	while (data[i] && data[i] != '\n')
		i++;
	return (ft_substr(data, 0, i + 1));
}

static char	*updata(char *data)
{
	char	*tmp;
	int		i;

	i = 0;
	while (data[i] && data[i] != '\n')
		i++;
	(data[i] == '\n') && (i += 1);
	tmp = ft_substr(data, i, ft_strlen(data + i));
	return (free(data), tmp);
}

char	*get_next_line(int fd, char **line)
{
	static char	*data;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX)
		return (NULL);
	buffer = malloc(sizeof(char) * ((size_t)BUFFER_SIZE + 1));
	if (!buffer)
		return (free(data), NULL);
	buffer[0] = 0;
	data = read_data(fd, buffer, data);
	free(buffer);
	if (!data)
		return (NULL);
	if (!*data)
		return (free(data), data = NULL, NULL);
	return (*line = gettingline(data), data = updata(data), *line);
}
