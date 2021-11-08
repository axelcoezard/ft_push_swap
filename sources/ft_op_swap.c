/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:05:31 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/08 13:20:34 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_op_swap(t_stack *stack)
{
	void	*tmp;

	if (stack->size > 1)
	{
		tmp = stack->peek->content;
		stack->peek->content = stack->peek->next->content;
		stack->peek->next->content = tmp;
	}
}

void	ft_op_swap_a(t_table *table)
{
	ft_op_swap(table->a);
	ft_putstr_fd("sa", 1);
}

void	ft_op_swap_b(t_table *table)
{
	ft_op_swap(table->b);
	ft_putstr_fd("sb", 1);
}

void	ft_op_swap_both(t_table *table)
{
	ft_op_swap_a(table);
	ft_op_swap_b(table);
	ft_putstr_fd("ss", 1);
}
