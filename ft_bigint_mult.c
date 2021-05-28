/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigint_mult.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 22:07:26 by oagrram           #+#    #+#             */
/*   Updated: 2021/05/28 19:05:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bigint	*ft_bigint_mult(t_bigint *a, t_bigint *b)
{
	t_bigint		*res;
	unsigned int	i;
	unsigned int	j;

	if (a == NULL || b == NULL)
		return (NULL);
	res = ft_bigint_new(a->length + b->length);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < b->length)
	{
		j = 0;
		while (j < a->length)
		{
			res->digits[i + j] += b->digits[i] * a->digits[j];
			res->digits[i + j + 1] += res->digits[i + j] / 10;
			res->digits[i + j] %= 10;
			j++;
		}
		i++;
	}
	return (res);
}
