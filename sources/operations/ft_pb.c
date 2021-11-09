/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:33:37 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 15:46:19 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	null(void *n)
{
	(void) n;
}

void	ft_pb(t_stack *stack)
{
	t_list	*list;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->a->content);
	ft_list_add_front(&(stack->b), tmp);
	list = stack->a->next;
	ft_list_remove(stack->a, null);
	stack->a = list;
	ft_putstr_fd("pb\n", 1);
}
