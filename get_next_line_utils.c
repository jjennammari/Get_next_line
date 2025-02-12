/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 21:26:50 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/12 22:24:15 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_newline(char *str)
{
	size_t	i;

	if (!str)
		return (0); //maybe NULL ?
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	if (str[i] == '\0')
		return (1); //return 1 or NULL ?
	return (0);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strclen(char *str, char c)
{
	size_t	i;

	if (!stash || !c)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	size_t	str_len;
	size_t	i;
	size_t	j;

	str_len = ft_strlen(str);
	dest = malloc(sizeof(char) * (str_len + 1));
}
