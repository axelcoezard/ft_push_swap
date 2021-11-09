/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:13:01 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 12:39:57 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	debug(t_table *table)
{
	t_list *acurrent = table->a->peek;
	ft_printf("Values: ");
	while (acurrent != NULL)
	{
		ft_printf("%d ", *((int *) acurrent->content));
		acurrent = acurrent->next;
	}
	ft_printf("\n");
}

int	main(int ac, char **av)
{
	if (ac == 1)
		return (!ft_puterror_fd(1));
	t_table	*table = ft_table_create();
	int	i = 1;
	while (i < ac)
	{
		int	*tmp = malloc(sizeof(int));
		*tmp = ft_atoi(av[i]);
		if (table->a->peek == NULL)
			table->a->peek = ft_list_create(tmp);
		else
			ft_stack_push(table->a, tmp);
		i++;
	}
	t_frag T = ft_stack_to_frag(table->a);
	while (!ft_is_sorted(&T))
	{
		ft_printf("=== Step ===\n");
		ft_selection_sort(&T);
		int	middle = ft_get_middle(&T);
		ft_printf("Middle: %d\n", middle);
		ft_printf("Op: ");
		t_list	*current = table->a->peek;
		while (current != NULL)
		{
			int	*value = current->content;
			if (*value < middle)
				ft_op_push_b(table);
			else
				ft_op_rotate_a(table);
			current = current->next;
		}
		debug(table);
		T = ft_stack_to_frag(table->a);
	}
	free(T.list);
	ft_list_clear(&(table->a->peek), free);
	return (0);
}
