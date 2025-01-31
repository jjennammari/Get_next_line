/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgnl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 01:27:46 by jemustaj          #+#    #+#             */
/*   Updated: 2025/01/31 12:18:30 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGNL_H
# define LIBGNL_H

# include <unistd.h> //open, read
# include <fcntl.h> //flags for open
# include <stdlib.h> //malloc, free

char	*get_next_line(int fd);

#endif
