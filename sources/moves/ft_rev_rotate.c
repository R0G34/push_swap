/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:12:42 by abausa-v          #+#    #+#             */
/*   Updated: 2024/02/23 14:18:10 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	ft_rev_rotate(t_stack **stack)
{
	t_stack *tmp;
	t_stack *last;
	t_stack *before_last;

	last = ft_stack_bottom(*stack);
	before_last = ft_stack_before_bottom(*stack);
	tmp = *stack;
	*stack = last;
	(*stack)->next = tmp;
	before_last->next = NULL;
}