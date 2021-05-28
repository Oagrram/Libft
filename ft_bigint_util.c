/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigint_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 22:07:53 by oagrram           #+#    #+#             */
/*   Updated: 2021/05/28 19:05:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_bigint_is_zero(t_bigint *bg_int)
{
	unsigned int	i;

	if (bg_int == NULL)
		return (-1);
	i = 0;
	while (i < bg_int->length)
		if (bg_int->digits[i] != 0)
			return (0);
	return (1);
}

int	ft_bigint_print(t_bigint *bg_int, int fd)
{
	int		len;
	int		ret;

	ret = 0;
	if (bg_int == NULL)
		return (0);
	len = bg_int->length - 1;
	while (len >= 0)
	{
		ret += ft_putchar_fd(bg_int->digits[len] + 48, fd);
		len--;
	}
	return (ret);
}
