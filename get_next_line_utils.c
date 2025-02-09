/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 20:50:23 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/09 23:31:34 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgnl.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

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
	dest = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1)); // where i free this?
	if (!dest)
		return (NULL);
	while (str1)
		*dest++ = *str1++;
	while (str2)
		*dest++ = *str2++;
	*dest = '\0';
	return (dest);
}
