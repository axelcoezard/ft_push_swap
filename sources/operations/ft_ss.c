/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:19:21 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 15:07:26 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_ss(t_stack *stack)
{
	int	tmpa;
	int	tmpb;

	tmpa = *((int *) stack->a->next->content);
	tmpb = *((int *) stack->b ->next->content);
	*((int *) stack->a->next->content) = *((int *) stack->a->content);
	*((int *) stack->b->next->content) = *((int *) stack->b->content);
	*((int *) stack->a->content) = tmpa;
	*((int *) stack->b->content) = tmpb;
	ft_putstr_fd("ss\n", 1);
}

