/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:20:10 by acoezard          #+#    #+#             */
/*   Updated: 2021/10/27 14:33:48 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

# include "../libft/includes/libft.h"

struct s_stack
{
	t_list	*peek;
	size_t	size;
};
typedef struct s_stack	t_stack;

t_stack	ft_stack_push(t_stack *stack, void *content);
t_list	*ft_stack_pop(t_stack *stack);
void	ft_stack_clear(t_stack *stack);

#endif
