/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:39:22 by malaoui           #+#    #+#             */
/*   Updated: 2019/10/30 00:02:50 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

int		get_next_line(int fd, char **line);
int		ft_checkerror(int fd, char **line, char **buff);
size_t	ft_strlen(const char *s);
char	*ft_add(char *s1, char *s2, int len);
int		ft_checkin(char *s, char **line, int rd);
char	*ft_store(char *s);
#endif
