/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:12:01 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 15:15:05 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rra(t_stack *stack)
{
	t_list	*last;
	int		*tmp;

	last = ft_list_last(stack->a);
	tmp = malloc(sizeof(int));
	*tmp = *((int *) last->content);
	ft_list_remove(last, free);
	ft_list_add_front(&(stack->a), tmp);
	ft_putstr_fd("rra\n", 1);
}
