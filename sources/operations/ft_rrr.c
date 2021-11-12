/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:16:03 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/12 19:18:17 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rrr(t_stack *stack)
{
	t_node *preva;
	t_node *prevb;
	int		*tmpa;
	int		*tmpb;

	tmpa = malloc(sizeof(int));
	tmpb = malloc(sizeof(int));
	*tmpa = *((int *) stack->a->last->content);
	*tmpb = *((int *) stack->b->last->content);
	preva = stack->a->last->prev;
	prevb = stack->b->last->prev;
	preva->next = NULL;
	prevb->next = NULL;
	list_add_front(stack->a, tmpa);
	list_add_front(stack->b, tmpb);
	list_remove(stack->a->last, free);
	list_remove(stack->b->last, free);
	stack->a->last = preva;
	stack->b->last = prevb;
	ft_putstr_fd("rrr\n", 1);
}
