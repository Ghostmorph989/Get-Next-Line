/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 00:03:13 by malaoui           #+#    #+#             */
/*   Updated: 2019/10/30 05:27:46 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int ac, char **av)
{
	char	*s;
	int		fd;

	fd = open(av[ac - 1], O_RDONLY);
	while ((get_next_line(fd, &s) == 1))
	{	
		printf("%s\n", s);
		free(s);
	}
	free(s);
	return (0);
}
