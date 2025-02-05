/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:08:45 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/05 22:22:18 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgnl.h"

char	*get_next_line(int fd)
{
	int	c;
	char	*line;
	static char	*stash;

	if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) < 0)
		return (NULL);
	c = 0;
	line = read_fd(fd, &line, &c);
	stash = create_stash(&line, &stash);
	return (line);
}

char	*read_fd(int fd, char **line, int *c)
{
	char	*buff;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	while (!find_newline(line))
	{
		*c = read(fd, &buff, BUFFER_SIZE);
		if (c == -1)
			return (free(buff), NULL);
		line = ft_strjoin(*line, buff);
		free (buff);
	}
	if (buff)
		free(buff);
	return (*line);
}

char	*create_stash(char **line, char **stash)
{
	size_t	c;

	c = ft_strclen(*line, '\n');
	while (line)
		*stash++ = line[c++];
	return (*stash);
}
