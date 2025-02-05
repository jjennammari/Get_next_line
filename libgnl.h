/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgnl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 01:27:46 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/05 22:24:43 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGNL_H
# define LIBGNL_H

# include <unistd.h> //open, read
# include <fcntl.h> //flags for open
# include <stdlib.h> //malloc, free

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

char	*get_next_line(int fd);
char	*read_fd(int fd, char **line, int *char_count);
char	*create_stash(char **line, char **stash);

//utils
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);
size_t	ft_strclen(char *s, char c);
int	find_newline(char **line);

#endif
