/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apelissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 13:33:18 by apelissi          #+#    #+#             */
/*   Updated: 2018/01/15 10:08:14 by apelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "sys/stat.h"
#include "sys/types.h"
#include "fcntl.h"

int		main(int argc, char **argv)
{
	char	c[1];
	int		fd;

	fd = open(argv[1], 0);
	if (argc == 2)
		while (read(fd, c, 1))
			write(1, c, 1);
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	return (0);
}
