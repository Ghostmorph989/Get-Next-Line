/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:35:20 by malaoui           #+#    #+#             */
/*   Updated: 2019/10/29 23:59:46 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_next_line(int fd, char **line)
{
	static char	*str;
	char		*buff;
	int			rd;

	rd = 0;
	*line = NULL;
	if (ft_checkerror(fd, line, &buff) == -1)
		return (-1);
	if (str)
	{
		if (ft_checkin(str, line, ft_strlen(str)) == 1)
		{
			str = ft_store(str);
			return (1);
		}
	}
	while ((rd = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		if (ft_checkin(buff, line, rd) == 1)
		{
			str = ft_store(buff);
			return (1);
		}
	}
	return (0);
}
