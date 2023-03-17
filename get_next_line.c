/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erikadugar <erikadugar@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:32:55 by etavera-          #+#    #+#             */
/*   Updated: 2023/03/17 10:14:47 by erikadugar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd)
{
int n;
static int i;
char *c;
char duff[1024];

c = NULL;
n = read(fd, duff, 1024);
if (n != -1)
{
	while (duff[i] != '\0')
	{
		if (duff[i] == '\n')
		{
			write(1, "\n", 1);
			i++;
			break;
		}
		else
			write(1, &duff[i], 1);
		i++;
	}
}

return(i);
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
	get_next_line(fd);
	// get_next_line(fd);

}
