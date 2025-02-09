/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:27:39 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/09 23:32:57 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgnl.h"

char	*get_next_line(fd)
{
	char	*line;
	static char	*stash;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0 // or &line?, 0))
		return (NULL);
	stash = read_fd(fd, stash);
}

char	*read_fd(int fd, char *stash)
{
	char	*buff;
	size_t	readed;

	if (!stash)

	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	readed = 1;
	while (readed > 0)
	{
		readed = read(fd, buff, BUFFER_SIZE);
		if (readed == -1)
			return (free(buff), NULL);
		else if (readed == 0)
			break ;
		buff[readed] = '\0';
		stash = ft_strjoin(stash, buff);
	}
	free(buff);
	return (stash);
}
