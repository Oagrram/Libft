/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigint_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 22:06:51 by oagrram           #+#    #+#             */
/*   Updated: 2021/05/28 19:05:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	calculate(t_bigint **res, size_t len, t_bigint *a, t_bigint *b)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		if (i < a->length)
			(*res)->digits[i] += a->digits[i];
		if (i < b->length)
			(*res)->digits[i] += b->digits[i];
		if ((*res)->digits[i] > 9)
		{
			(*res)->digits[i + 1]++;
			(*res)->digits[i] %= 10;
		}
		i++;
	}
	if ((*res)->digits[(*res)->length - 1] == 0)
		(*res)->length -= 1;
}

t_bigint	*ft_bigint_add(t_bigint *a, t_bigint *b)
{
	size_t		res_len;
	t_bigint	*res;

	if (a == NULL || b == NULL)
		return (NULL);
	res_len = ft_max(a->length, b->length) + 1;
	res = ft_bigint_new(res_len);
	if (res == NULL)
		return (NULL);
	calculate(&res, res_len, a, b);
	return (res);
}
