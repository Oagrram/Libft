/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 19:47:09 by oagrram           #+#    #+#             */
/*   Updated: 2021/05/03 15:20:51 by oagrram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnchar_fd(char c, int n, int fd)
{
	char	*str;
	int		size;

	size = n;
	str = ft_malloc(size);
	while (n--)
		str[n] = c;
	write(fd, str, size);
	free(str);
	return (size);
}
