/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:17:07 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/06 22:38:43 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgnl.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i])
		i++;
	return (i);
}
// the problem is that I cannot calculate empty line in the first time
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;

	res = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (!s1 || !s2)
		return (NULL);
	while (s1)
		*res++ = *s1++;
	while (s2)
		*res++ = *s2++;
	res = NULL;
	return (res);
}

size_t	ft_strclen(char *s, char c)
{
	size_t	i;

	if (!s || !c)
		return (0);
	i = 0;
	while (s[i] || s[i] != c)
		i++;
	return (i);
}

int	find_newline(char **line)
{
	int		i;
	char	*c;

	if (!line)
		return (0);
	i = 0;
	c = "\n";
	while (line[i])
	{
		if (line[i] == c)
		{
			i++;
			return (1);
		}
		i++;
	}
	return (0);
}
