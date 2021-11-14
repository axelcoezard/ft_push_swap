/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:13:01 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/14 00:05:51 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stacks;
	t_tab	copy;

	stacks = parse_args(ac, av);
	copy = convert_to_tab(stacks.a);
	if (!check_sorted(&copy))
	{
		normalize_stack(stacks.a);
		if (stacks.a->size > 5)
			sort_big_stack(&stacks);
		else
			sort_small_stack(&stacks);
	}
	free(copy.v);
	//list_clear(stacks.a, free);
	return (0);
}
