/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erikadugar <erikadugar@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:02:09 by etavera-          #+#    #+#             */
/*   Updated: 2023/06/03 08:59:00 by erikadugar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

# include <errno.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

char *get_next_line(int fd);
int		ft_strlen(const char *str);
void *ft_calloc(size_t count, size_t size);
#endif


// #ifndef GET_NEXT_LINE_H
// # define GET_NEXT_LINE_H

// # include <stdlib.h>
// # include <unistd.h>

// size_t	ft_strlen(char *str);
// char	*get_next_line(int fd);
// char	*ft_readed_line(char *src);
// char	*ft_strchr(char *s, int c);
// char	*ft_move_start(char *start);
// char	*ft_strjoin(char *start, char *buff);
// char	*ft_join(char *dest, char *s1, char *s2);

// #endif