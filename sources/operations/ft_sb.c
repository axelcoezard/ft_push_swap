/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:17:26 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 13:18:03 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sb(t_stack *stack)
{
	int	tmp;

	tmp = *((int *) stack->b->next->content);
	*((int *) stack->b->next->content) = *((int *) stack->b->content);
	*((int *) stack->b->content) = tmp;
	ft_putstr_fd("sb\n", 1);
}
