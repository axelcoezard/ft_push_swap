/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:47:41 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/08 16:29:59 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	*ft_stack_pop(t_stack *stack)
{
	t_list	*tmp;
	void	*content;

	if (stack == NULL)
		return (NULL);
	content = stack->peek->content;
	tmp = stack->peek->next;
	ft_list_remove(stack->peek, free);
	stack->peek = tmp;
	return (content);
}
