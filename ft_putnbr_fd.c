/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:47:04 by oagrram           #+#    #+#             */
/*   Updated: 2021/05/28 19:05:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	ret;

	ret = 0;
	if (n >= 10 || n <= -10)
		ret = ft_putnbr_fd(n / 10, fd);
	if (n < 0 && n > -10)
		ret += ft_putchar_fd('-', fd);
	if (n < 0)
		return (ret + ft_putchar_fd('0' + (n % 10) * -1, fd));
	else
		return (ret + ft_putchar_fd('0' + n % 10, fd));
}
