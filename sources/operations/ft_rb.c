/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:43:05 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 14:59:40 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rb(t_stack *stack)
{
	int	*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->b->content);
	ft_list_remove(stack->b, free);
	ft_list_add_back(&(stack->b), &tmp);
	ft_putstr_fd("rb\n", 1);
}

