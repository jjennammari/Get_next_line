/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:27:39 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/12 16:03:49 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgnl.h"
#include <stdio.h>

char	*read_to_stash(int fd, char *stash);
char	*extract_line(char *stash);
char	*update_stash(char *stash, char *line);

char	*get_next_line(int fd)
{
	char		*line;
	static char	*stash;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	stash = read_to_stash(fd, stash);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	if (!line || line[0] == '\0')
	{
		if (line[0] == '\0')
			return (free(stash), free(line), NULL);
		return (NULL);
	}
	stash = update_stash(stash, line);
	if (!stash)
		line[ft_strlen(line) - 1] = '\0';
	return (line);
}

char	*read_to_stash(int fd, char *stash)
{
	ssize_t	readed;
	char	*buff;
	char	*temp;

	if (stash == NULL)
		stash = ft_strdup("");
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	readed = 1;
	while (!find_newline(stash) && readed > 0)
	{
		readed = read(fd, buff, BUFFER_SIZE);
		if (readed == -1)
			return (free(buff), free(stash), NULL);
		buff[readed] = '\0';
		temp = ft_strjoin(stash, buff);
		if (!temp)
			return (free(buff), free(stash), NULL);
		free(stash);
		stash = temp;
	}
	free(buff);
	return (stash);
}

char	*extract_line(char *stash)
{
	char	*next_line;
	size_t	line_len;
	size_t	i;

	line_len = ft_strclen(stash, '\n') + 1;
	next_line = malloc(sizeof(char) * (line_len + 1));
	if (!next_line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		next_line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		next_line[i++] = '\n';
	next_line[i] = '\0';
	return (next_line);
}

char	*update_stash(char *stash, char *line)
{
	char	*next_stash;
	size_t	line_len;
	size_t	i;
	size_t	j;

	if (!stash)
		return (NULL);
	line_len = ft_strlen(line);
	i = ft_strlen(stash + line_len);
	next_stash = malloc(sizeof(char) * (i + 1));
	if (!next_stash)
		return (free(stash), NULL);
	j = 0;
	while (stash[line_len])
		next_stash[j++] = stash[line_len++];
	next_stash[j] = '\0';
	free(stash);
	return (next_stash);
}
