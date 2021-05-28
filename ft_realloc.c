/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 01:42:48 by vanderwolk        #+#    #+#             */
/*   Updated: 2021/05/28 19:05:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *addr, size_t old_size, size_t new_size)
{
	void	*ret_addr;

	ret_addr = ft_malloc(new_size);
	if (ret_addr == NULL)
		return (NULL);
	ft_memcpy(ret_addr, addr, old_size);
	return (ret_addr);
}
