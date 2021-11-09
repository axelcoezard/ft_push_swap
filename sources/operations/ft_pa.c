/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:27:35 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 13:35:03 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_pa(t_stack *stack)
{
	t_list	*tmp;

	ft_list_add_front(&(stack->a), stack->b->content);
	tmp = stack->b->next;
	ft_list_remove(stack->b, free);
	stack->b = tmp;
	ft_putstr_fd("pa\n", 1);
}
