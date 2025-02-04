/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:08:45 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/04 22:07:58 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgnl.h"

char	*get_next_line(int fd)
{
	size_t	char_count;
	char	*line;
	static char	*stash;

	if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) < 0)
		return (NULL);
	char_count = 0;
	line = ft_read (fd, &line, &char_count);
	stash = update_file(fd, &line, &char_count, &stash);
	return (line);
}

	ft_read(int fd, char **line, int *char_count)
{
	char	*buff;
	int	char_count;

	buff = malloc ((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	while (!find_newline (line))
	{
		*char_count = read (fd, &buff, BUFFER_SIZE);
		if (*char_count == -1)
			return (free(buff), NULL);
		line = ft_strjoin (line, buff);
		free (buff);
	}
	if (buff)
		free (buff);
	return (line);
}

int	find_newline(char *line)
{
	if (!line)
		return (0);
	while (line != '\n' || line != '\0')
	{
		*line++;
		if (line == '\n' || line == '\0')
			*line++; // tsek this, is it necessary to include '\n'?
			return (1);
	}
	return (0);
}

char	*update_file(int fd,char **line, int *char_count, char **stash)
{
	char	*buff;

	buff = malloc ((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	while (
	{
		*char_count = read (fd, &buff, BUFFER_SIZE);
	}
}
