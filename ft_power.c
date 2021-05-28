/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 16:27:49 by oagrram           #+#    #+#             */
/*   Updated: 2021/05/28 19:05:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_power(int nbr, unsigned int exp)
{
	long long	res;

	res = 1;
	while (exp > 0)
	{
		if (exp % 2 == 1)
			res *= nbr;
		exp >>= 1;
		nbr *= nbr;
	}
	return (res);
}
