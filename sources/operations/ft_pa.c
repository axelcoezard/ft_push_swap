/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:27:35 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 17:04:13 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	null(void *n)
{
	(void) n;
}

void	ft_pa(t_stack *stack)
{
	t_list	*list;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->b->content);
	ft_list_add_front(&(stack->a), tmp);
	list = stack->b->next;
	ft_list_remove(stack->b, null);
	stack->b = list;
	ft_putstr_fd("pa\n", 1);
}

