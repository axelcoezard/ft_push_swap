/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:47:20 by acoezard          #+#    #+#             */
/*   Updated: 2021/11/13 22:26:57 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_int(const char *nptr)
{
	int				nbr;
	size_t			digits;
	size_t			i;

	i = 0;
	nbr = 0;
	digits = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		digits++;
		if ((nbr * 10 + (nptr[i] - '0')) / 10 != nbr)
			return (0);
		nbr = nbr * 10 + (nptr[i] - '0');
		i++;
	}
	return (!nptr[i] && digits);
}
