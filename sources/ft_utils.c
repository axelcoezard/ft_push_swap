/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:36:35 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/12 20:16:19 by axelcoezard      ###   ########.fr       */
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
