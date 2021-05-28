/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:49:11 by oagrram           #+#    #+#             */
/*   Updated: 2021/05/28 19:05:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	int	ret;

	ret = 0;
	if (n >= 10 || n <= -10)
		ret = ft_putnbr(n / 10);
	if (n < 0 && n > -10)
		ret += ft_putchar('-');
	if (n < 0)
		return (ret + ft_putchar('0' + (n % 10) * -1));
	else
		return (ret + ft_putchar('0' + n % 10));
}
