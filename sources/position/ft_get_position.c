/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:13:13 by abausa-v          #+#    #+#             */
/*   Updated: 2024/02/23 14:18:31 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	ft_get_position(t_stack **stack)
{
	t_stack *aux;
	int		i;
	aux = *stack;
	i = 0;
	while (aux)
	{
		aux->position = i;
		aux = aux->next;
		i++;
	}
}