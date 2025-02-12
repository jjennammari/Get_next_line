/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 20:50:23 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/12 15:23:20 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgnl.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	if (!str)
		return (NULL);
	dest = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*dest;
	int		i;

	if (!str1 && !str2)
		return (NULL);
	else if (!str1)
		return ((char *)(str2));
	else if (!str2)
		return ((char *)(str1));
	dest = malloc(sizeof(char) * (ft_strlen((char *)str1)
				+ ft_strlen((char *)str2) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (*str1)
		dest[i++] = *str1++;
	while (*str2)
		dest[i++] = *str2++;
	dest[i] = '\0';
	return (dest);
}

size_t	ft_strclen(char	*str, char c)
{
	size_t	i;

	if (!str || !c)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (i);
}

int	find_newline(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
