/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 23:14:54 by oagrram           #+#    #+#             */
/*   Updated: 2021/05/28 19:05:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(void *src, size_t n)
{
	unsigned char	*res;
	unsigned char	*s;
	size_t			i;

	if (src != NULL)
		res = (unsigned char *)ft_malloc(n);
	if (src == NULL || res == NULL)
		return (NULL);
	i = 0;
	s = (unsigned char *)src;
	while (i < n)
	{
		res[i] = s[i];
		i++;
	}
	return ((void *)res);
}
