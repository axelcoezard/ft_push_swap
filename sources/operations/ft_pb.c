/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:33:37 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/13 00:24:39 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_pb(t_stack *stack)
{
	t_node	*list;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->a->first->content);
	list_add_front(stack->b, tmp);
	list = stack->a->first->next;
	list_remove(stack->a->first, free);
	stack->a->first = list;
	ft_putstr_fd("pb\n", 1);
}
