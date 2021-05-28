/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_ul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 11:38:34 by oagrram             #+#    #+#             */
/*   Updated: 2021/05/01 11:46:38 by oagrram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	assign_ul(unsigned long *ret, unsigned long value)
{
	*ret = value;
	return (value);
}
