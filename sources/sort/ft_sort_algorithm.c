/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:13:42 by abausa-v          #+#    #+#             */
/*   Updated: 2024/02/23 14:19:03 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_sort_algorithm(t_stack **a, t_stack **b)
{
	ft_push_saving_three(a, b);
	ft_tiny_sort(a);
	while (*b)
	{
		ft_get_target_position(a, b);
		ft_get_cost(a, b);
		ft_do_cheap_move(a, b);
	}
	if (!ft_is_sorted(*a))
		ft_shift_stack(a);
}