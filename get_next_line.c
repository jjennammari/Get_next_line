/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:27:39 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/10 21:54:25 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgnl.h"

char	*read_to_stash(int fd, char *stash);
char	*extract_line(char *stash);
char	*update_stash(char *stash);

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
	if (!line)
		return (NULL);
	stash = update_stash(stash);
	// need to free something? should i free line in main or here?
	return (line);
}

char	*read_to_stash(int fd, char *stash)
{
	ssize_t	readed;
	char	*buff;

	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	readed = 1;
	while (readed > 0 && (!(!find_newline(buff))))
	{
		readed = read(fd, buff, BUFFER_SIZE);
		if (readed == -1)
			return (free(buff), NULL);
		if (readed == 0)
			break ;
		buff[readed] = '\0';
		stash = ft_strjoin(stash, buff); //inside mallocing stash and nullterminating
	}
	free(buff);
	return (stash);
}

char	*extract_line(char *stash)
{
	char	*next_line;
	size_t	line_len;
	size_t	i;

	line_len = 0;
	while (stash[line_len] || stash[line_len] != '\n') //or ft_strclen(stash, '\n'), add '\0' in funct.
		line_len++;
	next_line = malloc(sizeof(char) * line_len + 1); // or two if '\n' and '\0'?
	if (!next_line)
		return (NULL);
	i = 0;
	while (stash[i] || stash[i] != '\n')
		next_line[i++] = stash[i++];
	if (stash[i] == '\0' || stash[i] == '\n')
	{
		next_line[i++] = '\n';
		next_line[i] = '\0';
	}
	//free (should i free next_line here or line somewhere else?)
	return (next_line);
}

char	*update_stash(char *stash)
{
	char	*next_stash;
	size_t	line_len;
	size_t	i;
	size_t	j;

	if (!stash)
		return (NULL);
	i = ft_strlen(stash);
	line_len = 0;
	while (stash[line_len] || stash[line_len] != '\n') //or ft_strclen(stash, '\n'), add '\0' in funct.
		line_len++;
	next_stash = malloc(sizeof(char) * (i - line_len) + 1);
	if (!next_stash)
		return (NULL);
	line_len++;
	j = 0;
	while (stash[line_len])
		next_stash[j++] = stash[line_len++];
	next_stash[j] = '\0';
	return (next_stash);
}
