/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strichr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 19:05:08 by oagrram           #+#    #+#             */
/*   Updated: 2021/05/28 19:05:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strichr(const char *s, int c)
{
	size_t	i;
	char	ch;

	if (s == NULL)
		return (-1);
	i = 0;
	ch = (char)c;
	while (s[i])
	{
		if (s[i] == ch)
			return (i);
		i++;
	}
	return (-1);
}
