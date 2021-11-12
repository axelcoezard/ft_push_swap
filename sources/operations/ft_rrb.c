/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:15:23 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/12 19:15:39 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rrb(t_stack *stack)
{
	t_node *prev;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->b->last->content);
	prev = stack->b->last->prev;
	prev->next = NULL;
	list_add_front(stack->b, tmp);
	list_remove(stack->b->last, free);
	stack->b->last = prev;
	ft_putstr_fd("rrb\n", 1);
}
