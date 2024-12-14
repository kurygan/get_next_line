/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:24:39 by mkettab           #+#    #+#             */
/*   Updated: 2024/12/14 21:57:45 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_list	*buf = NULL;
	char	*fin_line;

	if(fd < 0 || BUFFER_SIZE <= 0 || read(fd, &fin_line, 0) < 0)
		return (NULL);
	fin_line = NULL;
	read_and_stock(&buf, fd);
}

void	read_and_stock(t_list **buf, int fd)
{
	char	*str;
	int		readed;

	readed = 1;
	while(ft_foundline(*buf) && readed != 0)
	{
		str = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!str)
			return ;
		readed = (int)read(fd, str, BUFFER_SIZE);
		if((!buf && !readed) || readed == -1)
		{
			free(str);
			return ;
		}

	}
}