/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_autoalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 16:30:03 by oagrram           #+#    #+#             */
/*   Updated: 2021/05/28 19:05:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_alloc_list	*g_allocs;

void	ft_autofree_all(void)
{
	t_alloc_list	*tmp;

	while (g_allocs)
	{
		tmp = g_allocs;
		g_allocs = g_allocs->next;
		free(tmp->address);
		free(tmp);
	}
	g_allocs = NULL;
}

void	*ft_autoalloc(size_t size)
{
	void			*ptr;
	t_alloc_list	*node;
	t_alloc_list	*tmp;

	ptr = ft_memalloc(size);
	if (ptr != NULL)
		node = (t_alloc_list *)ft_memalloc(sizeof(t_alloc_list));
	if (ptr == NULL || node == NULL)
	{
		free(ptr);
		ft_autofree_all();
		return (NULL);
	}
	node->address = ptr;
	if (g_allocs == NULL)
		g_allocs = node;
	else
	{
		tmp = g_allocs;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (ptr);
}
