/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:11:42 by abausa-v          #+#    #+#             */
/*   Updated: 2024/02/23 14:17:20 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	exit_error(t_stack **a, t_stack **b)
{
	if (a == NULL || *a != NULL)
		ft_free_stack(a);
	if (b == NULL || *b != NULL)
		ft_free_stack(b);
	ft_printf("ERROR\n");
	exit(1);
}