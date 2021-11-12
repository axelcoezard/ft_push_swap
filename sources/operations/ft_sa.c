/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:13:13 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/12 19:25:15 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sa(t_stack *stack)
{
	t_list	*a;
	int	tmp;

	a = stack->a;
	tmp = *((int *) a->first->next->content);
	*((int *) a->first->next->content) = *((int *) a->first->content);
	*((int *) a->first->content) = tmp;
	ft_putstr_fd("sa\n", 1);
}
