/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:20:10 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/09 13:36:50 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

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

int		ft_puterror(int fd);

t_stack	ft_stack_init(void);
t_tab	ft_stack_to_tab(t_list	*list);

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

#endif
