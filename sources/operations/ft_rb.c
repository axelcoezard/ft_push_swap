/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:43:05 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 17:04:24 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	null(void *n)
{
	(void) n;
}

void	ft_rb(t_stack *stack)
{
	t_list *next;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->b->content);
	next = stack->b->next;
	ft_list_add_back(&(stack->b), tmp);
	ft_list_remove(stack->b, null);
	stack->b = next;
	ft_putstr_fd("rb\n", 1);
}

