/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:20:10 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/08 16:38:21 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

# define STACK_A	0
# define STACK_B	1
# define STACK_BOTH	2

struct s_stack
{
	t_list	*peek;
	size_t	size;
};
typedef struct s_stack	t_stack;

struct s_table
{
	t_stack	*a;
	t_stack	*b;
};
typedef struct s_table	t_table;

int		ft_puterror_fd(int fd);

t_stack *ft_stack_create(t_list	*peek, size_t size);
void	ft_stack_push(t_stack *stack, void *content);
void	*ft_stack_pop(t_stack *stack);
int		ft_stack_clear(t_stack *stack);

t_table	*ft_table_create(void);
int		ft_table_clear(t_table *table);

#endif
