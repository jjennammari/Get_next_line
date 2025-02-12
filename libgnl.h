/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgnl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:28:40 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/12 17:16:13 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGNL_H
# define LIBGNL_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <fcntl.h> // open flags
# include <stdlib.h> // free, malloc
# include <unistd.h> // open, read

char	*extract_line(char *stash);
char	*get_next_line(int fd);
char	*read_to_stash(int fd, char *stash);
char	*update_stash(char *stash, char *line);

int		find_newline(char *str);
size_t	ft_strclen(char *str, char c);
char	*ft_strdup(char *str);
char	*ft_strjoin(const char *str1, const char *str2);
size_t	ft_strlen(char *str);

#endif
