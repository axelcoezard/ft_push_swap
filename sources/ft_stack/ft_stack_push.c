/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:30:12 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/08 16:35:16 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_stack_push(t_stack *stack, void *content)
{
	if (stack == NULL)
		return (NULL);
	ft_list_add_front(&(stack->peek), content);
	return (stack);
}
