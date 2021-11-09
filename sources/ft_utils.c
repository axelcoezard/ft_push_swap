/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:36:35 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 13:25:04 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_get_middle(t_tab *tab)
{
	if (tab->values == NULL)
		return (0);
	return (tab->values[tab->size / 2]);
}

int	ft_is_sorted(t_tab	*tab)
{
	int		i;

	i = 0;
	while (i + 1 < tab->size)
	{
		if (tab->values[i] > tab->values[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_selection_sort(t_tab *tab)
{
	int		cursor;
	int		i;
	int		tmp;
	int		min;

	cursor = 0;
	while (cursor < tab->size)
	{
		i = cursor;
		min = i;
		while (i < tab->size)
		{
			if (tab->values[i] < tab->values[min])
				min = i;
			i++;
		}
		tmp = tab->values[cursor];
		tab->values[cursor] = tab->values[min];
		tab->values[min] = tmp;
		cursor++;
	}
}
