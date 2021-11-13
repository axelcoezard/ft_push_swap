/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:13:01 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/13 00:31:56 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	debug(t_list *list)
{
	t_node *acurrent;

	acurrent = list->first;
	ft_printf("Values: ");
	while (acurrent != NULL)
	{
		ft_printf("%d\t", *((int *) acurrent->content));
		acurrent = acurrent->next;
	}
	ft_printf("\n");
}

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	if (ac == 1)
		return (!ft_puterror());
	t_stack	stacks = initialize_stack();
	int	i = 1;
	while (i < ac)
	{
		int	*tmp = malloc(sizeof(int));
		*tmp = ft_atoi(av[i]);
		list_add_back(stacks.a, tmp);
		i++;
	}
	debug(stacks.a);
	normalize_stack(stacks.a);
	debug(stacks.a);
	sort_big_stack(&stacks);
	debug(stacks.a);
	list_clear(stacks.a, free);
	return (0);
}
