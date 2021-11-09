/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:13:13 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 13:17:13 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sa(t_stack *stack)
{
	int	tmp;

	tmp = *((int *) stack->a->next->content);
	*((int *) stack->a->next->content) = *((int *) stack->a->content);
	*((int *) stack->a->content) = tmp;
	ft_putstr_fd("sa\n", 1);
}
