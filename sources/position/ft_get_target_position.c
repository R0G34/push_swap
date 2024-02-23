/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_target_position.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:13:16 by abausa-v          #+#    #+#             */
/*   Updated: 2024/02/23 14:18:33 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_get_target_position(t_stack **a, t_stack **b)
{
	t_stack *aux_b;
	int		target_pos;

	aux_b = *b;
	ft_get_position(a);
	ft_get_position(b);
	target_pos = 0;
	while (aux_b)
	{
		target_pos = ft_get_target(a, aux_b->index, INT_MAX, target_pos);
		aux_b->target = target_pos;
		aux_b = aux_b->next;
	}
}