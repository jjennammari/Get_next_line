/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgnd.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:28:40 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/09 19:53:31 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGNL_H
# define LIBGNL_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

#include <fcntl.h> // open flags
#include <stdlib.h> // free, malloc
#include <unistd.h> // open, read

char	*get_next_line(fd);

#endif
