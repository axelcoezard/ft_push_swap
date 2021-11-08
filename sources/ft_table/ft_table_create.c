/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:02:01 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/08 16:38:06 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_table	*ft_table_create(void)
{
	t_table	*table;

	table = (t_table *) malloc(sizeof(t_table *));
	if (table == NULL)
		return (NULL);
	table->a = (t_stack *) malloc(sizeof(t_stack *));
	table->b = (t_stack *) malloc(sizeof(t_stack *));
	if (table->a == NULL || table->b == NULL)
		return (NULL);
	table->a->peek = ft_list_create(NULL);
	table->b->peek = ft_list_create(NULL);
	table->a->size = 0;
	table->b->size = 0;
	return (table);
}
