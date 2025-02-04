/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:17:07 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/04 21:29:50 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgnl.h"

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;

	res = malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (!s1 || !s2)
		return (NULL);
	while (s1)
		*res++ = *s1++;
	while (s2)
		*res++ = *s2++;
	res = '\0';
	return (res);
}
