/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:10:39 by jemustaj          #+#    #+#             */
/*   Updated: 2025/01/31 13:39:03 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	fd;
	char	*next_line;

	fd = open ("toyou.txt", O_RDONLY);

	close (fd);
	return (0);
}
