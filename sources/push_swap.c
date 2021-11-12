/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:13:01 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/12 16:57:19 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	debug(t_list *list)
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
		int	*count = malloc(sizeof(int));
		*count = 0;
		t_list	*current = stack->a;
		while (current != NULL)
		{
			int tmp = *((int *) current->content);
			int tmpLast = *((int *) ft_list_last(current)->content);
			if (tmp == ft_stack_min(stack->a))
			{
				ft_pb(stack);
				(*count)++;
				ft_list_add_front(&(stack->chunks), count);
				break;
			}
			if (tmp < middle)
				ft_pb(stack), (*count)++;
			else if (tmpLast < middle)
				ft_rra(stack);
			else
				ft_ra(stack);
			if (stack->chunks == NULL)
				stack->chunks = ft_list_create(count);
			else
				ft_list_add_front(&(stack->chunks), count);
			current = current->next;
		}
		T = ft_stack_to_tab(stack->a);
	}
	free(T.values);
}

void	sortB(t_stack *stack)
{
	t_list	*c_chunk = stack->chunks;
	while (c_chunk != NULL)
	{
		int	count = *((int *) c_chunk->content);
		int	i = 0;
		while (i < count)
		{
			t_tab chunk = ft_stack_chunk(stack->b, count);
			t_tab dup_c = ft_tab_dup(&chunk);
			ft_selection_sort(&dup_c);
			int middle = ft_get_middle(&dup_c);
			free(dup_c.values);
			if (chunk.values[i] < middle)
				ft_pa(stack);
			else
				ft_rb(stack);
			i++;
		}
		c_chunk = c_chunk->next;
	}
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
	debug(stack.a);
	sortA(&stack);
	debug(stack.chunks);
	debug(stack.b);
	sortB(&stack);
	ft_list_clear(&(stack.a), free);
	ft_list_clear(&(stack.b), free);
	ft_list_clear(&(stack.chunks), free);
	return (0);
}
