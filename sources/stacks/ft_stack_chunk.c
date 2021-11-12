/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_chunk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:11:30 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/12 15:36:56 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_tab	ft_stack_chunk(t_list *list, int count)
{
	t_list	*tmp;
	t_tab	chunk;
	int	i;

	i = 0;
	chunk.values = (int *) ft_calloc(count, sizeof(int));
	chunk.size = count;
	tmp = list;
	while (i < count)
	{
		chunk.values[i] = *((int *) tmp->content);
		tmp = tmp->next;
		i++;
	}
	return (chunk);
}
