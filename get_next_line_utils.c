/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erikadugar <erikadugar@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:33:20 by etavera-          #+#    #+#             */
/*   Updated: 2023/06/03 09:04:00 by erikadugar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	r;

	r = 0;
	while (str[r] != '\0')
	{
		r++;
	}
	return (r);
}
void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	p = malloc(count * size);
	if (p == NULL)
		return ((void *) p);
	while (i < count * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}


// #include "get_next_line.h"

// size_t	ft_strlen(char	*str)
// {
// 	size_t	i;

// 	i = 0;
// 	if (!str)
// 		return (0);
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// char	*ft_strchr(char *s, int c)
// {
// 	size_t	i;

// 	if (!s)
// 		return (NULL);
// 	if (c == 0)
// 	{
// 		i = ft_strlen((char *)s);
// 		return (&s[i]);
// 	}
// 	i = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == (char) c)
// 			return (&s[i]);
// 		i++;
// 	}
// 	return (NULL);
// }

// char	*ft_strjoin(char *start, char *buff)
// {
// 	char	*ptr;

// 	if (!start)
// 	{
// 		start = (char *)malloc(1 * sizeof(char));
// 		start[0] = '\0';
// 	}
// 	if (!start || !buff)
// 		return (NULL);
// 	ptr = (char *)malloc(1 + ft_strlen(start) + ft_strlen(buff) * sizeof(char));
// 	if (!ptr)
// 		return (NULL);
// 	ptr = ft_join(ptr, start, buff);
// 	free(start);
// 	return (ptr);
// }

// char	*ft_join(char *dest, char *s1, char *s2)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	while (s1 && s1[i])
// 	{
// 		dest[i] = s1[i];
// 		i++;
// 	}
// 	j = 0;
// 	while (s2 && s2[j])
// 	{
// 		dest[i + j] = s2[j];
// 		j++;
// 	}
// 	dest[i + j] = '\0';
// 	return (dest);
// }