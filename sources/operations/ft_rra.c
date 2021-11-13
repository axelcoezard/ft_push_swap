/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:12:01 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/13 20:25:28 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rra(t_stack *stack)
{
	t_node *prev;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->a->last->content);
	prev = stack->a->last->prev;
	prev->next = NULL;
	list_add_front(stack->a, tmp);
	list_remove(stack->a, stack->a->last, free);
	stack->a->last = prev;
	ft_putstr_fd("rra\n", 1);
}
