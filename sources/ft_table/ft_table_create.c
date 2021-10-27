/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:02:01 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/27 17:07:16 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_table	*ft_table_create(t_list *a, t_list *b, size_t size)
{
	t_table	*table;

	table = (t_table *) malloc(sizeof(t_table *));
	if (table == NULL)
		return (NULL);
	table->a = (t_stack *) malloc(sizeof(t_stack *));
	table->b = (t_stack *) malloc(sizeof(t_stack *));
	if (table->a == NULL || table->b == NULL)
		return (NULL);
	table->a->peek = a;
	table->b->peek = b;
	table->a->size = size;
	table->b->size = size;
	return (table);
}
