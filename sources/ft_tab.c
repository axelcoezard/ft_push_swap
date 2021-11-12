/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:04:09 by axelcoezard       #+#    #+#             */
/*   Updated: 2021/11/12 20:44:48 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_tab	convert_to_tab(t_list *stack)
{
	t_node	*current;
	t_tab	tab;
	size_t	i;

	i = 0;
	tab.v = malloc(stack->size * sizeof(int));
	tab.size = stack->size;
	current = stack->first;
	while (current != NULL)
	{
		tab.v[i++] = *((int *) current->content);
		current = current->next;
	}
	return (tab);
}

size_t	find_index_in_tab(t_tab *tab, int	value)
{
	size_t	i;

	i = 0;
	while (i < tab->size)
	{
		if (tab->v[i] == value)
			return (i);
		i++;
	}
	return (0);
}

void	sort_tab(t_tab *tab)
{
	size_t	cursor;
	size_t	i;
	size_t	min;
	int		tmp;

	cursor = 0;
	while (cursor < tab->size)
	{
		i = cursor;
		min = i;
		while (i < tab->size)
		{
			if (tab->v[i] < tab->v[min])
				min = i;
			i++;
		}
		tmp = tab->v[cursor];
		tab->v[cursor] = tab->v[min];
		tab->v[min] = tmp;
		cursor++;
	}
}