/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:16:51 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/27 17:19:53 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_stack_clear(t_stack *stack)
{
	if (stack == NULL)
		return (0);
	if (stack->peek != NULL)
		ft_list_clear(&stack->peek, free);
	free(stack);
	return (1);
}
