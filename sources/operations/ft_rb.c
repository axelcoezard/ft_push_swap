/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:43:05 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/12 19:14:16 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	null(void *n)
{
	(void) n;
}

void	ft_rb(t_stack *stack)
{
	t_node *next;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->b->first->content);
	next = stack->b->first->next;
	list_add_back(stack->b, tmp);
	list_remove(stack->b->first, null);
	stack->b->first = next;
	ft_putstr_fd("rb\n", 1);
}

