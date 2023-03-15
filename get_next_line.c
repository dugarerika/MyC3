/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:32:55 by etavera-          #+#    #+#             */
/*   Updated: 2023/03/15 13:56:33 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
int n;
int i;
char *c;
char buff[1024];

c = NULL;
n = read(fd, buff, 1024);
i = ft_strlen(buff);
printf("%i", i);
if (n != -1)
	while (buff[i] != '\')
	{
		if (buff[i] != '\n' && buff[i + 1] !='\0')
			write(1, &buff[i], 1);
			i++;
		i++;
	}


return(c);
}

# include <fcntl.h>
int main()
{
	// unsigned int a = 0;
	// printf("%u\n", a);
	// ft_printf("%u\n", a);
	int fd;
	char path[] = "/Users/etavera-/Documents/example.txt";
	fd = open(path, O_RDONLY);
	get_next_line(fd);
}
