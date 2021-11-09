/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:13:01 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 17:06:39 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	debug(t_list *list)
{
	t_list *acurrent = list;
	ft_printf("Values: ");
	while (acurrent != NULL)
	{
		ft_printf("%d ", *((int *) acurrent->content));
		acurrent = acurrent->next;
	}
	ft_printf("\n");
}

void	sortA(t_stack *stack)
{
	t_tab T = ft_stack_to_tab(stack->a);
	while (!ft_is_sorted(&T))
	{
		ft_selection_sort(&T);
		int	middle = ft_get_middle(&T);
		t_list	*current = stack->a;
		while (current != NULL)
		{
			int tmp = *((int *) current->content);
			if (tmp == ft_stack_min(stack->a))
			{
				ft_pb(stack);
				break;
			}
			if (tmp < middle)
				ft_pb(stack);
			else
				ft_ra(stack);
			current = current->next;
		}
		T = ft_stack_to_tab(stack->a);
	}
	free(T.values);
}

void	sortB(t_stack *stack)
{
	t_tab T = ft_stack_to_tab(stack->b);
	while (!ft_is_sorted(&T))
	{
		ft_selection_sort(&T);
		int	middle = ft_get_middle(&T);
		t_list	*current = stack->b;
		while (current != NULL)
		{
			int tmp = *((int *) current->content);
			if (tmp == ft_stack_min(stack->b))
			{
				ft_pa(stack);
				break;
			}
			if (tmp < middle)
				ft_pa(stack);
			else
				ft_rb(stack);
			current = current->next;
		}
		T = ft_stack_to_tab(stack->b);
	}
	free(T.values);
}
int	main(int ac, char **av)
{
	if (ac == 1)
		return (!ft_puterror());
	t_stack	stack = ft_stack_init();
	int	i = 1;
	while (i < ac)
	{
		int	*tmp = malloc(sizeof(int));
		*tmp = ft_atoi(av[i]);
		if (stack.a == NULL)
			stack.a = ft_list_create(tmp);
		else
			ft_list_add_back(&(stack.a), tmp);
		i++;
	}
	sortA(&stack);
	sortB(&stack);
	debug(stack.a);
	debug(stack.b);
	ft_list_clear(&(stack.a), free);
	ft_list_clear(&(stack.b), free);
	return (0);
}
