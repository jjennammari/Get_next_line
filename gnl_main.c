/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:10:39 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/04 19:00:02 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	fd;
	char	*line;

	fd = open ("toyou.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line != '\0')
	{
		printf("%s", line);
		*line++;
	}
	free (line);
	close (fd);
	return (0);
}
