/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:37:45 by axelcoezard       #+#    #+#             */
/*   Updated: 2021/11/13 20:41:44 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	initialize_stack(void)
{
	t_stack	stack;

	stack.a = list_create();
	stack.b = list_create();
	return (stack);
}

/**
 * @brief Converti la valeur des nombres de la pile vers la position
 * qu'ils occupent dans la pile une fois triee.
 * i.e. Tous les nombres deviennent compris entre 0 et N (taille de la pile).
 *
 * @param stack Une pile t_list.
 */
void	normalize_stack(t_list	*stack)
{
	t_node	*current;
	t_tab	copy;
	size_t	index;
	int		*value;

	copy = convert_to_tab(stack);
	sort_tab(&copy);
	current = stack->first;
	while (current != NULL)
	{
		index = find_index_in_tab(&copy, *((int *) current->content));
		value = malloc(sizeof(int));
		*value = index;
		free(current->content);
		current->content = value;
		current = current->next;
	}
	free(copy.v);
}

void	sort_small_stack(t_stack *stacks)
{
	(void) stacks;
}

void	sort_big_stack(t_stack *stacks)
{
	size_t	max_bits;
	size_t	top;
	size_t	i;
	size_t	j;
	size_t	size;

	size = stacks->a->size;
	max_bits = 0;
	while ((size - 1) >> max_bits != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			top = *((int *) stacks->a->first->content);
			if (((top >> i) & 1) == 1)
				ft_ra(stacks);
			else
				ft_pb(stacks);
		}
		while (stacks->b->first != NULL)
			ft_pa(stacks);
	}
}
