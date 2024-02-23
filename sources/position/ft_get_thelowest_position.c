/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_thelowest_position.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:13:23 by abausa-v          #+#    #+#             */
/*   Updated: 2024/02/23 14:18:39 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_get_thelowest_position(t_stack **stack)
{
	t_stack *aux;
	int		low_index;
	int		low_position;

	aux = *stack;
	low_index = INT_MAX;
	ft_get_position(stack);
	low_position = aux->position;
	while (aux)
	{
		if (aux->index < low_index)
		{
			low_index = aux->index;
			low_position = aux->position;
		}
		aux = aux->next;
	}
	return (low_position);
}