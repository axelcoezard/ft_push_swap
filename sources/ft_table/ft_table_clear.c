/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:08:16 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/27 17:10:12 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int		ft_table_clear(t_table *table)
{
	if (table == NULL)
		return (0);
	if (table->a != NULL)
		ft_stack_clear(table->a);
	if (table->b != NULL)
		ft_stack_clear(table->b);
	free(table);
	return (1);
}
