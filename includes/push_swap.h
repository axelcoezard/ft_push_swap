/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:20:10 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/12 13:50:06 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

struct s_stack
{
	t_list	*a;
	t_list	*b;
	t_list	*chunks;
};
typedef struct s_stack	t_stack;

struct s_tab
{
	int		*values;
	int		size;
};
typedef struct s_tab	t_tab;

int		ft_puterror(void);

t_stack	ft_stack_init(void);
t_tab	ft_stack_to_tab(t_list	*list);
int		ft_stack_min(t_list *stack);
t_tab	ft_stack_chunk(t_list *list, int count);

void	ft_sa(t_stack *stack);
void	ft_sb(t_stack *stack);
void	ft_ss(t_stack *stack);
void	ft_pb(t_stack *stack);
void	ft_pa(t_stack *stack);
void	ft_ra(t_stack *stack);
void	ft_rb(t_stack *stack);
void	ft_rr(t_stack *stack);
void	ft_rra(t_stack *stack);
void	ft_rrb(t_stack *stack);
void	ft_rrr(t_stack *stack);

int		ft_get_middle(t_tab *tab);
int		ft_is_sorted(t_tab	*tab);
t_tab	ft_tab_dup(t_tab *src);
void	ft_selection_sort(t_tab *tab);

#endif
