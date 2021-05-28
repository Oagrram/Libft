/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 22:52:43 by oagrram           #+#    #+#             */
/*   Updated: 2021/05/28 19:05:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup(t_list *lst_src)
{
	t_list	*head;
	t_list	*lst_dst;

	if (lst_src == NULL)
		return (NULL);
	lst_dst = ft_lstnew(lst_src->content, lst_src->content_size);
	head = lst_dst;
	lst_src = lst_src->next;
	while (lst_src)
	{
		lst_dst->next = ft_lstnew(lst_src->content, lst_src->content_size);
		lst_dst = lst_dst->next;
		lst_src = lst_src->next;
	}
	return (head);
}
