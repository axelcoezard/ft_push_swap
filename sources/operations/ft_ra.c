/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:58:04 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/12 19:14:22 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	null(void *n)
{
	(void) n;
}

void	ft_ra(t_stack *stack)
{
	t_node *next;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->a->first->content);
	next = stack->a->first->next;
	list_add_back(stack->a, tmp);
	list_remove(stack->a->first, null);
	stack->a->first = next;
	ft_putstr_fd("ra\n", 1);
}
