/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:47:04 by oagrram           #+#    #+#             */
/*   Updated: 2021/05/28 19:05:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr_base(unsigned long long n, int base, int is_upper)
{
	int					ret;
	static const char	*lower_base = "0123456789abcdef";
	static const char	*upper_base = "0123456789ABCDEF";

	ret = 0;
	if (n / base)
		ret += ft_putunbr_base(n / base, base, is_upper);
	if (is_upper)
		ft_putchar(upper_base[n % base]);
	else
		ft_putchar(lower_base[n % base]);
	return (ret + 1);
}
