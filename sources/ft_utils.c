/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:36:35 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/12 21:01:22 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_get_middle(t_tab *tab)
{
	if (tab->v == NULL)
		return (0);
	return (tab->v[tab->size / 2]);
}

int	ft_is_sorted(t_tab	*tab)
{
	int		i;

	i = 0;
	while (i + 1 < tab->size)
	{
		if (tab->v[i] > tab->v[i + 1])
			return (0);
		i++;
	}
	return (1);
}
