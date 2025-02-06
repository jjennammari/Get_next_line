/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:10:39 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/06 18:24:17 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libgnl.h"

int	main(void)
{
	int		fd;
	char	*line;

	line = NULL;
	fd = open("toyou.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line)
		printf("%s", line);
	free (line);
	close (fd);
	return (0);
}
