/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:02:01 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/12 12:43:39 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	ft_stack_init(void)
{
	t_stack stack;

	stack.a = NULL;
	stack.b = NULL;
	stack.chunks = NULL;
	return (stack);
}
