/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgnl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 01:27:46 by jemustaj          #+#    #+#             */
/*   Updated: 2025/02/04 19:01:56 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGNL_H
# define LIBGNL_H

# include <unistd.h> //open, read
# include <fcntl.h> //flags for open
# include <stdlib.h> //malloc, free

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5

char	*get_next_line(int fd);

#endif
