/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int fd = 0;
	int i = 0;
	int y = 1;
	char buffer[buf];

	//fd = open(av[y], O_RDONLY);
	while (y < ac) {
		fd = open(av[y], O_RDONLY);
		y++;
		i = 0;
		while (buffer[i] != '\0') {
			read(fd, buffer, buf);
			my_putchar(buffer[i]);
			i++;
		}
	}
	buffer[i] = '\0';
	close(fd);
	return (0);
}
