/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:41:00 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/08 16:46:15 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate(t_stack *stack)
{
	void	*content;

	if (stack != NULL)
	{
		content = ft_stack_pop(stack);
		ft_list_add_back(&(stack->peek), content);
	}
}

void	ft_rotate_a(t_table *table)
{
	ft_rotate(table->a);
	ft_printf("ra\n");
}

void	ft_rotate_b(t_table *table)
{
	ft_rotate(table->b);
	ft_printf("rb\n");
}
