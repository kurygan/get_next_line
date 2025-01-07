/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:01:21 by mkettab           #+#    #+#             */
/*   Updated: 2025/01/06 19:28:06 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct s_list
{
	char *content;
	struct s_list *next;
} t_list;

char	*get_next_line(int fd);
t_list	*ft_getlast(t_list *list);
int	ft_foundline(t_list *list);
int	read_and_stock(t_list **buf, int fd);
void	lst_clean(t_list **buf);
void	get_line_appart(t_list *buf, char **str);
void	stock_add(char *str, t_list **buf, int readed);
void	line_gen(char **str, t_list *buf);
int	ft_strlen	(char *str);
void	lst_free(t_list *lst);

#endif