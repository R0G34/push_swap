/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_cheap_move.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:12:33 by abausa-v          #+#    #+#             */
/*   Updated: 2024/02/23 14:18:03 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_do_cheap_move(t_stack **a, t_stack **b)
{
	t_stack *aux;
	int		cheap;
	int		cost_a;
	int		cost_b;

	aux = *b;
	cheap = INT_MAX;
	while (aux)
	{
		if (ft_is_nbr_abs(aux->cost_a)
			+ ft_is_nbr_abs(aux->cost_b) < ft_is_nbr_abs(cheap))
		{
			cheap = ft_is_nbr_abs(aux->cost_b) + ft_is_nbr_abs(aux->cost_a);
			cost_a = aux->cost_a;
			cost_b = aux->cost_b;
		}
		aux = aux->next;
	}
	ft_which_move(a, b, cost_a, cost_b);
}