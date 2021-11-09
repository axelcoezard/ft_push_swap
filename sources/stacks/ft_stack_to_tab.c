/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:06:02 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 13:10:09 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_tab	ft_stack_to_tab(t_list	*list)
{
	t_list	*current;
	t_tab	tab;
	int		i;

	tab.values = (int *) ft_calloc(ft_list_size(list), sizeof(int));
	current = list;
	i = 0;
	while (current != NULL)
	{
		tab.values[i] = *(int *)(current->content);
		current = current->next;
		i++;
	}
	tab.size = i;
	return (tab);
}
