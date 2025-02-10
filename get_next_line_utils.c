/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 20:50:23 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/10 21:40:53 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgnl.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*dest;

	if (!str1 && !str2)
		return (NULL);
	else if (!str1)
		return (str2);
	else if (!str2)
		return (str1);
	dest = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!dest)
		return (NULL);
	while (str1)
		*dest++ = *str1++;
	while (str2)
		*dest++ = *str2++;
	*dest = '\0';
	return (dest);
}

int	ft_strclen(char	*str, char c)
{
	size_t	i;

	if (!str || !c)
		return (0);
	i = 0;
	while (str[i] || str[i] != c)
		i++;
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
