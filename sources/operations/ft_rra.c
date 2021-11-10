/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:12:01 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/10 16:04:06 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rra(t_stack *stack)
{
	t_list	*head;
	t_list	*tmp;

	if (stack->a && stack->a->next)
	{
		head = stack->a;
		while (stack->a->next->next)
			stack->a = stack->a->next;
		tmp = stack->a->next;
		stack->a->next = NULL;
		stack->a = head;
		tmp->next = stack->a;
		stack->a = tmp;
		ft_putstr_fd("rra\n", 1);
	}
}
