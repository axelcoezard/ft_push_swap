/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:15:23 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 15:15:52 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rrb(t_stack *stack)
{
	t_list	*last;
	int		*tmp;

	last = ft_list_last(stack->b);
	tmp = malloc(sizeof(int));
	*tmp = *((int *) last->content);
	ft_list_remove(last, free);
	ft_list_add_front(&(stack->b), tmp);
	ft_putstr_fd("rrb\n", 1);
}
