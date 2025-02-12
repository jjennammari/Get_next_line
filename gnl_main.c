/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:10:39 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/12 18:20:50 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libgnl.h"

int	main(void)
{
	char	*line;
	int		fd;
/*
	fd = 0;
	if (fd < 0)
		return (-1);
	line = "asdf";
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("fd == 0:\n");
		printf("%s", line);
		free(line);
	}
	close(fd);*/

	fd = open("5000_chars.txt", O_RDONLY);
	if (fd < 0)
		return (-1);
	line = "asdf";
	printf("5000 chars:\n");
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
/*
	fd = open("long_line.txt", O_RDONLY);
	if (fd < 0)
		return (-1);
	line = "asdf";
	printf("One long line:\n");
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);

	fd = open("empty.txt", O_RDONLY);
	if (fd < 0)
		return (-1);
	line = "asdf";
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("Empty file:\n");
		printf("%s", line);
		free(line);
	}
	close(fd);
	
	fd = open("one_char.txt", O_RDONLY);
	if (fd < 0)
		return (-1);
	line = "asdf";
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("One char in file:\n");
		printf("%s", line);
		free(line);
	}
	close(fd);

	fd = open("three_chars.txt", O_RDONLY);
	if (fd < 0)
		return (-1);
	line = "asdf";
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("Three chars in file:\n");
		printf("%s", line);
		free(line);
	}
	close(fd);

	fd = open("one_line.txt", O_RDONLY);
	if (fd < 0)
		return (-1);
	line = "asdf";
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("One newline in file:\n");
		printf("%s", line);
		free(line);
	}
	close(fd);

	fd = open("toyou.txt", O_RDONLY);
	if (fd < 0)
		return (-1);
	line = "asdf";
	printf("Short story:\n");
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);

	fd = open("digits.txt", O_RDONLY);
	if (fd < 0)
		return (-1);
	line = "asdf";
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("List of digits in one line:\n");
		printf("%s", line);
		free(line);
	}
	close(fd);*/
	return (0);
}
