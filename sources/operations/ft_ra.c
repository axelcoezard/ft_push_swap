/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:58:04 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 14:59:28 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_ra(t_stack *stack)
{
	int	*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->a->content);
	ft_list_remove(stack->a, free);
	ft_list_add_back(&(stack->a), &tmp);
	ft_putstr_fd("ra\n", 1);
}
