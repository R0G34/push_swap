/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_saving_three.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:13:34 by abausa-v          #+#    #+#             */
/*   Updated: 2024/02/23 14:18:45 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	ft_push_saving_three(t_stack **a, t_stack **b)
{
	int	size;
	int	push;
	int	i;

	size = ft_get_size_stack(*a);
	push = 0;
	i = 0;
	while (size > 6 && i < size && push < size / 2)
	{
		if ((*a)->index <= size / 2)
		{
			ft_do_pb(a, b);
			push++;
		}
		else
			ft_do_ra(a);
		i++;
	}
	while (size - push > 3)
	{
		ft_do_pb(a, b);
		push++;
	}
}