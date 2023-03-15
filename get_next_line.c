/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:32:55 by etavera-          #+#    #+#             */
/*   Updated: 2023/03/15 10:04:43 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd)
{
int n;
char buff[1024];

n = read(fd, buff, 1024);
if (n == -1)
	printf("An error occurred while trying to read the file");
return(n);
}

# include <fcntl.h>
int main()
{
	// unsigned int a = 0;
	// printf("%u\n", a);
	// ft_printf("%u\n", a);
	int fd;
	char path[] = "Documents/example.txt";
	fd = open(path, O_RDONLY);
	get_next_line(fd);
}
