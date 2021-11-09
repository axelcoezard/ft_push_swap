/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:59:43 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 15:05:21 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rr(t_stack *stack)
{
	int	*tmpa;
	int	*tmpb;

	tmpa = (int *) malloc(sizeof(int));
	tmpb = (int *) malloc(sizeof(int));
	*tmpa = *((int *) stack->a->content);
	*tmpb = *((int *) stack->b->content);
	ft_list_remove(stack->a, free);
	ft_list_remove(stack->b, free);
	ft_list_add_back(&(stack->a), &tmpa);
	ft_list_add_back(&(stack->b), &tmpb);
	ft_putstr_fd("rr\n", 1);
}
