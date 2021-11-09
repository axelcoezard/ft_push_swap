/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:58:04 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 15:51:57 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	null(void *n)
{
	(void) n;
}

void	ft_ra(t_stack *stack)
{
	t_list *next;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->a->content);
	next = stack->a->next;
	ft_list_add_back(&(stack->a), tmp);
	ft_list_remove(stack->a, null);
	stack->a = next;
	ft_putstr_fd("ra\n", 1);
}
