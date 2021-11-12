/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:20:10 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/12 20:44:15 by axelcoezard      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

struct s_stack
{
	t_list	*a;
	t_list	*b;
};
typedef struct s_stack	t_stack;

struct s_tab
{
	int		*v;
	size_t	size;
};
typedef struct s_tab	t_tab;

int		ft_puterror(void);

t_stack	initialize_stack(void);
void	normalize_stack(t_list	*stack);
void	sort_small_stack(t_stack *stacks);
void	sort_big_stack(t_stack *stacks);

t_tab	convert_to_tab(t_list *stack);
size_t	find_index_in_tab(t_tab *tab, int	value);
void	sort_tab(t_tab *tab);

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

#endif
