/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:36:35 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 11:20:09 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_frag	ft_stack_to_frag(t_stack *stack)
{
	t_list	*current;
	t_frag	frag;
	int		i;

	frag.list = (int *) ft_calloc(ft_list_size(stack->peek), sizeof(int));
	current = stack->peek;
	i = 0;
	while (current != NULL)
	{
		frag.list[i] = *(int *)(current->content);
		current = current->next;
		i++;
	}
	frag.size = i;
	return (frag);
}

int	ft_get_middle(t_frag *frag)
{
	if (frag->list == NULL)
		return (0);
	return (frag->list[frag->size / 2]);
}

int	ft_is_sorted(t_frag	*frag)
{
	int		i;

	i = 0;
	while (i + 1 < frag->size)
	{
		if (frag->list[i] > frag->list[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_selection_sort(t_frag *frag)
{
	int		cursor;
	int		i;
	int		tmp;
	int		min;

	cursor = 0;
	while (cursor < frag->size)
	{
		i = cursor;
		min = i;
		while (i < frag->size)
		{
			if (frag->list[i] < frag->list[min])
				min = i;
			i++;
		}
		tmp = frag->list[cursor];
		frag->list[cursor] = frag->list[min];
		frag->list[min] = tmp;
		cursor++;
	}
}
