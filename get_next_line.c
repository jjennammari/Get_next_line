/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 21:00:57 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/12 21:39:38 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_to_stash(char *stash);
char	*extract_line(char *stash);

char	*get_next_line(int fd)
{
	char	*stash;
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	stash = read_to_stash(stash);
	line = extract_line(stash);
}

char	*read_to_stash(char *stash)
{
	char	*buff;
	char	*temp;
	ssize_t	readed;

	if (!stash)
		stash = ft_strdup("");
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (free(stash), NULL);
	while (readed > 0 && !find_newline(stash))
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
	char	*line;
	size_t	line_len;

	if (!stash)
		return (); // NULL ? and check also !*stash?
	line_len = ft_strclen(stash, '\n'); //also search for '\0' inside function
	line = malloc(sizeof(char) * (ft_strlen(stash) - line_len + 2));
}
