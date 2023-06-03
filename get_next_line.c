/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erikadugar <erikadugar@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:32:55 by etavera-          #+#    #+#             */
/*   Updated: 2023/06/03 08:58:34 by erikadugar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	int n;
	int i;
	char *duff;
	static char	*acum;

	i = 0;
	n = 1;
	duff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	printf("duff: %s\n", duff);
	while (n > 0)
	{
		n = read(fd, duff, BUFFER_SIZE);
		if (n == -1)
			return NULL;
		if(n == 0)
			break;
		i++;
		printf("%i\n", i);
	}

	acum = NULL;
	while (duff[i] != '\0' && i <= BUFFER_SIZE)
	{
		
	}
	// if (n != -1 || duff[i] != '\0')
	// {
	// 	acum = ft_calloc(BUFFER_SIZE, sizeof(char));
	// }

	
	// 	while (duff[i] != '\0' && i <= BUFFER_SIZE)
	// 	{
	// 		// printf("-%i", i);
	// 		// printf("-%i", j);
	// 		if (duff[i] == '\n')
	// 		{
	// 			// acum[j] = '\n';
	// 			i++;
	// 			break;
	// 		}
	// 		else
	// 		{
	// 			acum[j] = duff[i];
	// 			i++;
	// 			j++;
	// 		}
	// 	}
	// 	acum[j + 1] = '\0';
	// 	return (acum);
	// 	free(acum);
	// }
	return (duff);
}

# include <fcntl.h>
int main()
{
	// unsigned int a = 0;
	// printf("%u\n", a);
	// ft_printf("%u\n", a);
	int fd;
	char path[] = "/Users/erikadugar/Desktop/example.txt";
	fd = open(path, O_RDONLY);
	// printf("1.%s\n", get_next_line(fd));
	// printf("2.%s\n", get_next_line(fd));
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	// get_next_line(fd);
	// get_next_line(fd);
	// get_next_line(fd);
	// get_next_line(fd);
}


// #include "get_next_line.h"

// char	*ft_readed_line(char *start)
// {
// 	int		i;
// 	char	*line;

// 	if (!start || !start[0])
// 		return (NULL);
// 	i = 0;
// 	while (start[i] && start[i] != '\n')
// 		i++;
// 	if (start[i] == '\n')
// 		i++;
// 	line = (char *)malloc(1 + i * sizeof(char));
// 	if (!line)
// 		return (NULL);
// 	i = 0;
// 	while (start[i] && start[i] != '\n')
// 	{
// 		line[i] = start[i];
// 		i++;
// 	}
// 	if (start[i] == '\n')
// 		line[i++] = '\n';
// 	line[i] = '\0';
// 	return (line);
// }

// char	*ft_move_start(char	*start)
// {
// 	char	*new_buff;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	while (start[i] && start[i] != '\n')
// 		i++;
// 	if (start[i] == '\0')
// 	{
// 		free(start);
// 		return (NULL);
// 	}
// 	i += (start[i] == '\n');
// 	new_buff = (char *)malloc(1 + ft_strlen(start) - i);
// 	if (!new_buff)
// 		return (NULL);
// 	j = 0;
// 	while (start[i + j])
// 	{
// 		new_buff[j] = start[i + j];
// 		j++;
// 	}
// 	new_buff[j] = '\0';
// 	free(start);
// 	return (new_buff);
// }

// char	*get_next_line(int fd)
// {
// 	char		*tmp;
// 	int			fd_read;
// 	static char	*start_str;

// 	if (fd < 0 || BUFFER_SIZE <= 0)
// 		return (NULL);
// 	fd_read = 1;
// 	tmp = (char *)malloc(1 + BUFFER_SIZE * sizeof(char));
// 	if (!tmp)
// 		return (NULL);
// 	while (!(ft_strchr(start_str, '\n')) && fd_read != 0)
// 	{
// 		fd_read = read(fd, tmp, BUFFER_SIZE);
// 		if (fd_read == -1)
// 		{
// 			free(tmp);
// 			return (NULL);
// 		}
// 		tmp[fd_read] = '\0';
// 		start_str = ft_strjoin(start_str, tmp);
// 	}
// 	free(tmp);
// 	tmp = ft_readed_line(start_str);
// 	start_str = ft_move_start(start_str);
// 	return (tmp);
// }