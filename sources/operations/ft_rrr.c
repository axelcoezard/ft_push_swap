/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:16:03 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 15:18:18 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rrr(t_stack *stack)
{
	t_list	*last_a;
	t_list	*last_b;
	int		*tmp_a;
	int		*tmp_b;

	last_a = ft_list_last(stack->a);
	last_b = ft_list_last(stack->b);
	tmp_a = malloc(sizeof(int));
	tmp_b = malloc(sizeof(int));
	*tmp_a = *((int *) last_a->content);
	*tmp_b = *((int *) last_b->content);
	ft_list_remove(last_a, free);
	ft_list_remove(last_b, free);
	ft_list_add_front(&(stack->a), tmp_a);
	ft_list_add_front(&(stack->b), tmp_b);
	ft_putstr_fd("rrr\n", 1);
}
