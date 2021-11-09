/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:33:37 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 13:35:12 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_pb(t_stack *stack)
{
	t_list	*tmp;

	ft_list_add_front(&(stack->b), stack->a->content);
	tmp = stack->a->next;
	ft_list_remove(stack->a, free);
	stack->a = tmp;
	ft_putstr_fd("pb\n", 1);
}
