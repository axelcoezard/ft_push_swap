/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:27:35 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/13 00:24:52 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_pa(t_stack *stack)
{
	t_node	*list;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->b->first->content);
	list_add_front(stack->a, tmp);
	list = stack->b->first->next;
	list_remove(stack->b->first, free);
	stack->b->first = list;
	ft_putstr_fd("pa\n", 1);
}

