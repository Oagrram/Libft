/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 00:13:53 by oagrram           #+#    #+#             */
/*   Updated: 2021/05/28 19:05:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpop(t_list **alst)
{
	t_list	*node;
	t_list	*tmp;

	if (*alst == NULL)
		return (NULL);
	if ((*alst)->next == NULL)
	{
		node = *alst;
		*alst = NULL;
		return (node);
	}
	tmp = *alst;
	while (tmp->next->next)
		tmp = tmp->next;
	node = tmp->next;
	tmp->next = NULL;
	return (node);
}
