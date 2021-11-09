/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_min.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:26:15 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 16:30:01 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_stack_min(t_list *stack)
{
	t_list *current;
	int min;

	if (stack == NULL)
		return (0);
	current = stack;
	min = *((int *) current->content);
	while (current->next != NULL)
	{
		if (*((int *) current->next->content) < min)
			min = *((int *) current->next->content);
		current = current->next;
	}
	return (min);
}
