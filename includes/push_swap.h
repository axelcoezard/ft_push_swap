/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:20:10 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 13:08:21 by acoezard         ###   ########.fr       */
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
	t_list	*a;
	t_list	*b;
	int		size_a;
	int		size_b;
};
typedef struct s_stack	t_stack;

struct s_tab
{
	int		*values;
	int		size;
};
typedef struct s_tab	t_tab;

int		ft_puterror_fd(int fd);

t_stack *ft_stack_create(t_list	*peek, size_t size);
void	ft_stack_push(t_stack *stack, void *content);
void	*ft_stack_pop(t_stack *stack);
int		ft_stack_clear(t_stack *stack);

t_table	*ft_table_create();
int		ft_table_clear(t_table *table);

void	ft_op_push_a(t_table *table);
void	ft_op_push_b(t_table *table);
void	ft_op_rotate_a(t_table *table);
void	ft_op_rotate_b(t_table *table);

t_frag	ft_stack_to_frag(t_stack *stack);
int		ft_get_middle(t_frag *frag);
int		ft_is_sorted(t_frag	*frag);
void	ft_selection_sort(t_frag *frag);

#endif
