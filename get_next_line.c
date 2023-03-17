/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erikadugar <erikadugar@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:32:55 by etavera-          #+#    #+#             */
/*   Updated: 2023/03/17 14:49:24 by erikadugar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
int n;
int j;
int longitud;
static int i;
char duff[1024];
char	*acum;

j = 0;
n = read(fd, duff, 1024);
longitud = ft_strlen(duff);
acum = NULL;
if (n != -1 && duff[i] != '\0' && duff[i + 1] != '\0')
{
	acum = malloc(longitud);
	while (duff[i] != '\0')
	{
		if (duff[i] == '\n')
		{
			acum[j] = '\n';
			// write(1, "\n", 1);
			i++;
			break;
		}
		else
		{
			acum[j] = duff[i];
			// write(1, &duff[i], 1);	
		}
		i++;
		j++;
	}
	acum[j + 1] = '\0';
}
else
	{
	acum = malloc(1);
	acum[j] = '\n';
	}
printf("%s", acum);
return(acum);
free(acum);
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
	// printf("%s\n", get_next_line(fd));
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
}
