/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:24:41 by mkettab           #+#    #+#             */
/*   Updated: 2024/12/14 20:48:44 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*ft_getlast(t_list *list)
{
	t_list *last;

	last = list;
	while(last && last->next)
		last = last->next;
	return (last);
}
int	ft_foundline(t_list *list)
{
	t_list *current;
	int	i;

	if (!list)
		return (1);
	current = ft_getlast(list);
	while (list->content[i])
	{
		if (list->content[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}