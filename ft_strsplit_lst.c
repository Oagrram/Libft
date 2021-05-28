/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 16:24:42 by oagrram           #+#    #+#             */
/*   Updated: 2021/05/28 19:05:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_strsplit_lst(char const *s, char c)
{
	t_list	*head;
	t_list	*tmp;
	char	**tab;
	int		i;

	tab = ft_strsplit(s, c);
	if (tab[0] == 0)
		return (NULL);
	head = ft_lstnew(tab[0], ft_strlen(tab[0]));
	tmp = head;
	i = 1;
	while (tab[i])
	{
		tmp->next = ft_lstnew(tab[i], ft_strlen(tab[i]));
		tmp = tmp->next;
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (head);
}
