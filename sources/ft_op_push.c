/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:21:18 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/08 13:25:55 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_op_push(t_stack *from, t_stack *to)
{
	t_list	*tmp;

	if (from->size > 0)
	{
		tmp = ft_stack_pop(from);
		ft_stack_push(to, tmp->content);
	}
}

void	ft_op_push_a(t_table *table)
{
	ft_op_push(table->b, table->a);
	ft_putstr_fd("pa", 1);
}

void	ft_op_push_b(t_table *table)
{
	ft_op_push(table->a, table->b);
	ft_putstr_fd("pb", 1);
}
