/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dequeue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oagrram <oagrram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 20:37:22 by oagrram           #+#    #+#             */
/*   Updated: 2021/05/28 19:05:45 by oagrram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_dequeue(t_queue *queue)
{
	t_list	*node;

	if (queue == NULL || queue->head == NULL)
		return (NULL);
	node = queue->head;
	queue->head = node->next;
	node->next = NULL;
	queue->length--;
	if (queue->length == 0)
		queue->tail = NULL;
	return (node);
}
